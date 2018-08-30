/* Written by Kaz Crowe */
/* UltimateJoystickJAVA.js ver. 1.6.0 */
#pragma strict
import UnityEngine.UI;
import UnityEngine.Events;
import UnityEngine.EventSystems;
import System.Collections.Generic;

/*
 * First off, the script is using [ExecuteInEditMode] to be able to show changes in real time.
 * This will not affect anything within a build or play mode. This simply makes the script
 * able to be run while in the Editor in Edit Mode.
*/
@script ExecuteInEditMode()
public class UltimateJoystickJAVA extends MonoBehaviour implements IPointerDownHandler, IDragHandler, IPointerUpHandler
{
	/* ----- > ASSIGNED VARIABLES < ----- */
	var joystick : RectTransform;
	var joystickSizeFolder : RectTransform;
	var joystickBase : RectTransform;
	private var baseTrans : RectTransform;
	private var textureCenter : Vector2;
	private var defaultPos : Vector2;
	private var joystickCenter : Vector3;
	var highlightBase : Image;
	var highlightJoystick : Image;
	var tensionAccentUp : Image;
	var tensionAccentDown : Image;
	var tensionAccentLeft : Image;
	var tensionAccentRight : Image;
	
	/* ----- > SIZE AND PLACEMENT < ----- */
	enum ScalingAxis{ Width, Height }
	var scalingAxis : ScalingAxis = ScalingAxis.Height;
	enum Anchor{ Left, Right }
	var anchor : Anchor = Anchor.Left;
	enum JoystickTouchSize{ Default, Medium, Large, Custom }
	var joystickTouchSize : JoystickTouchSize = JoystickTouchSize.Default;
	var joystickSize : float = 1.75;
	var radiusModifier : float = 4.5;
	private var radius : float;
	var dynamicPositioning : boolean = false;
	var customTouchSize_X : float = 50.0;
	var customTouchSize_Y : float = 75.0;
	var customTouchSizePos_X : float = 0.0;
	var customTouchSizePos_Y : float = 0.0;
	var customSpacing_X : float = 5.0f;
	var customSpacing_Y : float = 20.0f;
	enum UpdatePositioningOption{ OnceOnStart, ConstantOnUpdate }
	var updatePositioningOption : UpdatePositioningOption = UpdatePositioningOption.OnceOnStart;
	private var parentScaler : CanvasScaler;
	private var canvasSize : Vector2;
	
	/* ----- > STYLE AND OPTIONS < ----- */
	var touchPad : boolean = false;
	var throwable : boolean = false;
	var draggable : boolean = false;
	var throwDuration : float = 0.5;
	private var isThrowing : boolean = false;
	var showHighlight : boolean = false;
	var highlightColor : Color = new Color( 1, 1, 1, 1 );
	var showTension : boolean = false;
	var tensionColorNone : Color = new Color( 1, 1, 1, 1 );
	var tensionColorFull : Color = new Color( 1, 1, 1, 1 );
	enum Axis{ Both, X, Y }
	var axis : Axis;
	enum Boundary{ Circular, Square }
	var boundary : Boundary;
	enum DeadZoneOption{ DoNotUse, OneValue, TwoValues }
	var deadZoneOption : DeadZoneOption = DeadZoneOption.DoNotUse;
	var xDeadZone : float = 0.1f;
	var yDeadZone : float = 0.1f;
	
	/* ----- > TOUCH ACTIONS < ----- */
	enum TapCountOption{ NoCount, Accumulate, TouchRelease }
	var tapCountOption : TapCountOption;
	var tapCountDuration : float = 0.5;
	var tapCountEvent : UnityEvent;
	var targetTapCount : int = 2;
	var currentTapTime : float = 0.0;
	private var countingDown : boolean;
	private var tapCount : int = 0;
	var useAnimation : boolean;
	var joystickAnimator : Animator;
	var useFade : boolean;
	private var joystickGroup : CanvasGroup;
	var fadeUntouched : float = 1.0;
	var fadeTouched : float = 0.5;
	var joystickName : String;

	/* ----- > JOYSTICK POSITIONS < ----- */
	static var JoystickPositions : Dictionary.<String, Vector2> = new Dictionary.<String, Vector2>();


	function Start ()
	{
		if( Application.isPlaying == true )
		{
			// First off, UpdatePositioning of the joystick.
			UpdatePositioning();

			if( showHighlight == true )
				UpdateHighlightColor();

			if( showTension == true )
				TensionAccentReset();
		}
	}
	
	// This function is called on the initial touch down.
	function OnPointerDown ( touchInfo : PointerEventData )
	{
		// If the throwable option is selected and isThrowing, then stop the current movement.
		if( throwable == true && isThrowing == true )
			StopCoroutine( "ThrowableMovement" );
			
		// If dynamicPositioning or touchpad are enabled...
		if( dynamicPositioning == true || touchPad == true )
		{
			// Then move the joystickSizeFolder to the position of the touch.
			joystickSizeFolder.position = touchInfo.position - textureCenter;

			// Set the joystickCenter so that the position can be calculated correctly.
			joystickCenter = touchInfo.position;
		}

		// If the user wants animation to be shown, do that here.
		if( useAnimation == true )
			joystickAnimator.SetBool( "Touch", true );

		// If the user wants the joystick to fade, do that here.
		if( useFade == true && joystickGroup != null )
			joystickGroup.alpha = fadeTouched;
			
		// If the user is wanting to use any tap count...
		if( tapCountOption != TapCountOption.NoCount )
		{
			// If the user is accumulating taps...
			if( tapCountOption == TapCountOption.Accumulate )
			{
				// If the TapCounter is not counting down...
				if( countingDown == false )
				{
					// Set tapCount to 1 since this is the initial touch and start the TapCounter.
					tapCount = 1;
					TapCounter();
				}
				// Else the TapCounter is currently counting down, so increase the current tapCount.
				else
					++tapCount;
			}
			// Else the user wants to touch and release, so start the TapCounterDelay timer.
			else
				TapCounterDelay();
		}
		
		// Call UpdateJoystick with the info from the current PointerEventData.
		UpdateJoystick( touchInfo );
	}
	
	// This function is called when the user is dragging the joystick.
	function OnDrag ( touchInfo : PointerEventData )
	{
		// Call UpdateJoystick with the info from the current PointerEventData.
		UpdateJoystick( touchInfo );
	}
	
	// This function is called when the user has released the touch.
	function OnPointerUp ( touchInfo : PointerEventData )
	{
		// If dynamicPositioning, touchpad, or draggable are enabled...
		if( dynamicPositioning == true || touchPad == true || draggable == true )
		{
			// The joystickSizeFolder needs to be reset back to the default position.
			joystickSizeFolder.position = defaultPos;

			// Reset the joystickCenter since the touch has been released.
			joystickCenter = joystickBase.position;
		}

		// If the user has the throwable option enable, begin ThrowableMovement().
		if( throwable == true )
			StartCoroutine( "ThrowableMovement" );
		else
		{
			// Reset the joystick's position back to center.
			joystick.position = joystickCenter;

			// If the user has showHighlight enabled, and the highlightJoystick variable is assigned, reset it too.
			if( showHighlight == true && highlightJoystick != null )
				highlightJoystick.transform.position = joystickCenter;
		}

		// If the user has showTension enabled, then reset the tension if throwable is disabled.
		if( showTension == true && throwable == false )
			TensionAccentReset();

		// If the user has useAnimation enabled, set that here.
		if( useAnimation == true )
			joystickAnimator.SetBool( "Touch", false );
		
		// If the user has useFade enabled, set joystickGroup.alpha to reset back to an untouched state.
		if( useFade == true && joystickGroup != null )
			joystickGroup.alpha = fadeUntouched;
		
		// If the user is wanting to use the TouchAndRelease tapcount, and the tapTime is still above zero...
		if( tapCountOption == TapCountOption.TouchRelease && currentTapTime > 0 )
		{
			// Then stop the coroutine and call the tapCountEvent.
			StopCoroutine( "TapCounterDelay" );
			tapCountEvent.Invoke();
		}

		// If the user has set up the joystickName string, then set this joystick's position back to zero.
		if( joystickName != String.Empty )
			UltimateJoystickJAVA.SetJoystickPosition( joystickName, Vector2.zero );
	}
	
	// This function updates the Ultimate Joystick according to the current touch.
	private function UpdateJoystick ( touchInfo : PointerEventData )
	{
		// Create a new Vector2 to equal the vector from the curret touch to the center of joystick.
		var tempVector : Vector2 = touchInfo.position - joystickCenter;

		// If the user wants only one axis, then zero out the opposite value.
		if( axis == Axis.X )
			tempVector.y = 0;
		else if( axis == Axis.Y )
			tempVector.x = 0;
		
		// If the user wants a circular boundary for the joystick, then clamp the magnitude by the radius.
		if( boundary == Boundary.Circular )
			tempVector = Vector2.ClampMagnitude( tempVector, radius );
		// Else the user wants a square boundry, so clamp X and Y individually.
		else if( boundary == Boundary.Square )
		{
			// We want to Clamp both X and Y seperately so we get a square boundary
			tempVector.x = Mathf.Clamp( tempVector.x,  -radius,  radius );
			tempVector.y = Mathf.Clamp( tempVector.y,  -radius,  radius );
		}

		// Apply the tempVector to the joystick's position.
		joystick.transform.position = joystickCenter + tempVector;

		// If the user is showing highlight and the highlightJoystick is assigned, then move the highlight to match the joystick's position.
		if( showHighlight == true && highlightJoystick != null )
			highlightJoystick.transform.position = joystick.transform.position;

		// If the user has showTension enabled, then display the Tension.
		if( showTension == true )
			TensionAccentDisplay();
		
		// If the user wants to drag the joystick along with the touch...
		if( draggable == true )
		{
			// Then find the distance that the touch is from the center of the joystick.
			var touchDistance : float = Vector3.Distance( joystickCenter, touchInfo.position );

			// If the touchDistance is greater than the set radius...
			if( touchDistance >= radius )
			{
				// Figure out the current position of the joystick.
				var joystickPosition : Vector2 = ( joystick.position - joystickCenter ) / radius;

				// Move the joystickSizeFolder in the direction that the joystick is, multiplied by the difference in distance of the max radius.
				joystickSizeFolder.position += new Vector3( joystickPosition.x, joystickPosition.y, 0 ) * ( touchDistance - radius );

				// Reconfigure the joystickCenter since the joystick has now moved it position.
				joystickCenter = joystickBase.position;
			}
		}

		// If the user has set up the joystickName string, then set this joystick's position.
		if( joystickName != String.Empty )
			UltimateJoystickJAVA.SetJoystickPosition( joystickName, JoystickPosition );
	}
	
	// This function will configure the position of an image based on the size and custom spacing selected.
	private function ConfigureImagePosition ( textureSize : Vector2, customSpacing : Vector2 ) : Vector2
	{
		// First, fix the customSpacing to be a value between 0.0f and 1.0f.
		var fixedCustomSpacing : Vector2 = customSpacing / 100;

		// Then configure position spacers according to canvasSize, the fixed spacing and texture size.
		var positionSpacerX : float = canvasSize.x * fixedCustomSpacing.x - ( textureSize.x * fixedCustomSpacing.x );
		var positionSpacerY : float = canvasSize.y * fixedCustomSpacing.y - ( textureSize.y * fixedCustomSpacing.y );
		
		// Create a temporary Vector2 to modify and return.
		var tempVector : Vector2;
		
		// If it's left, simply apply the positionxSpacerX, else calculate out from the right side and apply the positionSpaceX.
		tempVector.x = anchor == Anchor.Left ? positionSpacerX : ( canvasSize.x - textureSize.x ) - positionSpacerX;

		// Apply the positionSpacerY variable.
		tempVector.y = positionSpacerY;
		
		// Return the updated temporary Vector.
		return tempVector;
	}
	
	// This function is called only when showTension is true, and only when the joystick is moving.
	private function TensionAccentDisplay ()
	{
		// Create a temporary Vector2 for the joystick current position.
		var tension : Vector2 = ( joystick.position - joystickCenter ) / radius;

		// If the joystick is to the right...
		if( tension.x > 0 )
		{
			// Then lerp the color according to tension's X position.
			tensionAccentRight.color = Color.Lerp( tensionColorNone, tensionColorFull, tension.x );
			
			// If the opposite tension is not tensionColorNone, the make it so.
			if( tensionAccentLeft.color != tensionColorNone )
				tensionAccentLeft.color = tensionColorNone;
		}
		// Else the joystick is to the left...
		else
		{
			// Mathf.Abs gives a positive number to lerp with.
			tension.x = Mathf.Abs( tension.x );
			tensionAccentLeft.color = Color.Lerp( tensionColorNone, tensionColorFull, tension.x );
			
			// Repeat above steps...
			if( tensionAccentRight.color != tensionColorNone )
				tensionAccentRight.color = tensionColorNone;
		}

		// If the joystick is up...
		if( tension.y > 0 )
		{
			// Then lerp the color according to tension's Y position.
			tensionAccentUp.color = Color.Lerp( tensionColorNone, tensionColorFull, tension.y );

			// If the opposite tension is not tensionColorNone, the make it so.
			if( tensionAccentDown.color != tensionColorNone )
				tensionAccentDown.color = tensionColorNone;
		}
		// Else the joystick is down...
		else
		{
			// Mathf.Abs gives a positive number to lerp with.
			tension.y = Mathf.Abs( tension.y );
			tensionAccentDown.color = Color.Lerp( tensionColorNone, tensionColorFull, tension.y );
			
			// Repeat above steps...
			if( tensionAccentUp.color != tensionColorNone )
				tensionAccentUp.color = tensionColorNone;
		}
	}
	
	// This function resets the tension image's colors back to default.
	private function TensionAccentReset ()
	{
		// This resets our tension colors back to default
		tensionAccentUp.color = tensionColorNone;
		tensionAccentDown.color = tensionColorNone;
		tensionAccentLeft.color = tensionColorNone;
		tensionAccentRight.color = tensionColorNone;
	}
	
	// This function is a countdown for the tapCountDuration to accumulate taps.
	private function TapCounter ()
	{
		countingDown = true;
		var currentTime : float = 0.0;
		var continueCheck : boolean = true;
		while( currentTime < tapCountDuration && continueCheck == true )
		{
			currentTime += Time.deltaTime;
			if( tapCount >= targetTapCount )
			{
				continueCheck = false;
				tapCountEvent.Invoke();
			}
			yield;
		}
		
		// Then reset the tapCount and countingDown variables.
		tapCount = 0;
		countingDown = false;
	}
	
	// This function is a counter for the tapCountDuration to touch and release within a set time window.
	private function TapCounterDelay ()
	{
		currentTapTime = tapCountDuration;
		while( currentTapTime >= 0 )
		{
			currentTapTime -= Time.deltaTime;
			yield;
		}
	}
	
	// This function is for returning the joystick back to center of a set amount of time.
	function ThrowableMovement ()
	{
		// Start throwing...
		isThrowing = true;
		
		// Fix the throwDuration into a speed.
		var throwSpeed : float = 1.0 / throwDuration;

		// Store the position of where the joystick is currently.
		var startJoyPos : Vector3 = joystick.position;

		// Boolean to control the slow at the end of the throw.
		var hasSlowed : boolean = false;
		for( var i : float = 0.0; i < 1.0; i += Time.deltaTime * throwSpeed )
		{
			// Lerp the joystick's position from where this coroutine started to the center.
			joystick.position = Vector3.Lerp( startJoyPos, joystickCenter, i );
			
			// If the user is using highlight and the highlightJoystick is assigned, move that as well.
			if( showHighlight == true && highlightJoystick != null )
				highlightJoystick.transform.position = joystick.position;
				
			// This will slow the joystick down at the end of the throw.
			if( i >= 0.85 && hasSlowed == false )
			{
				hasSlowed = true;
				throwSpeed *= 0.5;
			}
			
			// If the user has showTension enabled, then display the tension as the joystick moves.
			if( showTension == true )
				TensionAccentDisplay();
				
			// If the user has set up the joystickName string, then set this joystick's position.
			if( joystickName != String.Empty )
				UltimateJoystickJAVA.SetJoystickPosition( joystickName, JoystickPosition );
			
			yield;
		}
		
		isThrowing = false;
		
		// Finalize the joystick's position.
		joystick.position = joystickCenter;
		
		// If the user is using highlight and the highlightJoystick is assigned, finalize that as well.
		if( showHighlight == true && highlightJoystick != null )
			highlightJoystick.transform.position = joystick.position;
			
		// Here at the end, reset the tension.
		if( showTension == true )
			TensionAccentReset();
		
		// If the user has set up the joystickName string, then set this joystick's position back to zero.
		if( joystickName != String.Empty )
			UltimateJoystickJAVA.SetJoystickPosition( joystickName, Vector2.zero );
	}
	
	// This function is used only to find the canvas parent if its not the root object.
	private function GetParentCanvas () : CanvasScaler
	{
		var parent : Transform = transform.parent;
		while( parent != null )
		{ 
			if( parent.transform.GetComponent( CanvasScaler ) )
				return parent.transform.GetComponent( CanvasScaler );

			parent = parent.transform.parent;
		}
		return null;
	}

	private function GetCanvasGroup () : CanvasGroup
	{
		if( GetComponent( CanvasGroup ) )
			return GetComponent( CanvasGroup );
		else
		{
			gameObject.AddComponent( CanvasGroup );
			return GetComponent( CanvasGroup );
		}
	}
	
	private function get JoystickPositionDeadZone () : Vector2
	{
		var tempVec : Vector2 = ( joystick.position - joystickCenter ) / radius;
		
		// If the X value is to the LEFT, then update the deadZone vector2.x to -1 if it is.
		if( tempVec.x < -xDeadZone )
			tempVec.x = -1;
		// Else check if it is to the RIGHT, then update the deadZone vector2.x to 1 if it is.
		else if( tempVec.x > xDeadZone )
			tempVec.x = 1;
		// Else it is not past the deadZone values, so set it to zero.
		else
			tempVec.x = 0;
		
		// If the Y value is DOWN and then update the deadZone vector2.y to -1 if it is.
		if( tempVec.y < -yDeadZone )
			tempVec.y = -1;
		// Else check if it is UP, then update the deadZone vector2.y to 1 if it is.
		else if( tempVec.y > yDeadZone )
			tempVec.y = 1;
		// Else it is not past the deadZone values, so set it to zero.
		else
			tempVec.y = 0;
		
		return tempVec;
	}
	
	static function SetJoystickPosition ( joystickName : String, joystickPosition : Vector2 )
	{
		if( !JoystickPositions.ContainsKey( joystickName ) )
			JoystickPositions.Add( joystickName, Vector2.zero );
		
		JoystickPositions[ joystickName ] = joystickPosition;
	}
	
	function Update ()
	{
		#if UNITY_EDITOR
		// Keep the joystick updated while the game is not being played.
		if( Application.isPlaying == false )
			UpdatePositioning();
		#endif
		
		if( updatePositioningOption == UpdatePositioningOption.ConstantOnUpdate )
		{
			if( canvasSize != parentScaler.GetComponent( RectTransform ).sizeDelta * parentScaler.transform.localScale.x )
				UpdatePositioning();
		}
	}
	
	/* --------------------------------------------- *** PUBLIC FUNCTIONS FOR THE USER *** --------------------------------------------- */
	// Updates the size and placement of the Ultimate Joystick.
	public function UpdatePositioning ()
	{
		// If the root contains a CanvasScaler component, then store it for refernece.
		if( transform.root.GetComponent( CanvasScaler ) )
			parentScaler = transform.root.GetComponent( CanvasScaler );
		// Else the root doesn't have a CanvasScaler, so search through all parents to find one.
		else
			parentScaler = GetParentCanvas();
		
		// The canvas size is determined by the size of the parentScaler transform * it's local scale to allow different CanvasScaler options.
		canvasSize = parentScaler.GetComponent( RectTransform ).sizeDelta * parentScaler.transform.localScale.x;
		
		var referenceSize : float = scalingAxis == ScalingAxis.Height ? canvasSize.y : canvasSize.x;
		
		// Configure a size for the image based on the CanvasScaler's size and scale.
		var textureSize : float = referenceSize * ( joystickSize / 10 ) / parentScaler.transform.localScale.x;;
		
		// If baseTrans is null, store this object's RectTrans so that it can be positioned.
		if( baseTrans == null )
			baseTrans = GetComponent( RectTransform );

		// Get a position for the joystick based on the position variables.
		var imagePosition : Vector2 = ConfigureImagePosition( new Vector2( textureSize * parentScaler.transform.localScale.x, textureSize * parentScaler.transform.localScale.x ), new Vector2( customSpacing_X, customSpacing_Y ) );

		// If the user wants a custom touch size...
		if( joystickTouchSize == JoystickTouchSize.Custom )
		{
			// Fix the custom size variables.
			var fixedFBPX : float = customTouchSize_X / 100;
			var fixedFBPY : float = customTouchSize_Y / 100;

			// Depending on the joystickTouchSize options, configure the size.
			baseTrans.sizeDelta = new Vector2( canvasSize.x * fixedFBPX, canvasSize.y * fixedFBPY ) / parentScaler.transform.localScale.x;
			
			// Send the size and custom positioning to the ConfigureImagePosition function to get the exact position.
			var imagePos : Vector2 = ConfigureImagePosition( baseTrans.sizeDelta * parentScaler.transform.localScale.x, new Vector2( customTouchSizePos_X, customTouchSizePos_Y ) );

			// Apply the new position.
			baseTrans.position = imagePos;
		}
		else
		{
			// Temporary float to store a modifier for the touch area size.
			var fixedTouchSize : float = joystickTouchSize == JoystickTouchSize.Large ? 2.0f : joystickTouchSize == JoystickTouchSize.Medium ? 1.51f : 1.01f;

			// Temporary Vector2 to store the default size of the joystick.
			var tempVector : Vector2 = new Vector2( textureSize, textureSize );

			// Apply the joystick size multiplied by the fixedTouchSize.
			baseTrans.sizeDelta = tempVector * fixedTouchSize;
			
			// Apply the imagePosition modified with the difference of the sizeDelta divided by 2, multiplied by the scale of the parent canvas.
			baseTrans.position = imagePosition - ( ( baseTrans.sizeDelta - tempVector ) / 2 ) * parentScaler.transform.localScale.x;
		}
		
		// If the options dictate that the default position needs to be stored...
		if( dynamicPositioning == true || touchPad == true || draggable == true )
		{
			// Set the texture center so that the joystick can move to the touch position correctly.
			textureCenter = new Vector2( textureSize / 2, textureSize / 2 ) * parentScaler.transform.localScale.x;
			
			// Also need to store the default position so that it can return after the touch has been lifted.
			defaultPos = imagePosition;
		}
		
		// Store the pivot of the baseTrans so that the position will be correct no matter what the user has set for pivot.
		var pivotSpacer : Vector2 = new Vector2( baseTrans.sizeDelta.x * baseTrans.pivot.x * parentScaler.transform.localScale.x, baseTrans.sizeDelta.y * baseTrans.pivot.y * parentScaler.transform.localScale.y );
		
		// Apply the size and position to the joystickSizeFolder.
		joystickSizeFolder.sizeDelta = new Vector2( textureSize, textureSize );
		joystickSizeFolder.position = imagePosition + pivotSpacer;
		
		// Configure the size of the Ultimate Joystick's radius.
		radius = ( joystickSizeFolder.sizeDelta.x * parentScaler.transform.localScale.x ) * ( radiusModifier / 10 );
		
		// Store the joystick's center so that JoystickPosition can be configured correctly.
		joystickCenter = joystick.position;

		// If the user wants to fade, and the joystickGroup is unassigned, find the CanvasGroup.
		if( useFade == true && joystickGroup == null )
			joystickGroup = GetCanvasGroup();
	}
	
	// Returns the position of the Ultimate Joystick in a Vector2 Variable. X = Horizontal, Y = Vertical.
	function get JoystickPosition () : Vector2
	{
		if( deadZoneOption != DeadZoneOption.DoNotUse )
				return JoystickPositionDeadZone;
		
		return ( joystick.position - joystickCenter ) / radius;
	}
	
	// Returns the distance of the Ultimate Joystick from center.
	function get JoystickDistance () : float
	{
		var joystickDistance : float = Vector3.Distance( joystick.position, joystickCenter ) / radius;
		return joystickDistance;
	}
	
	function ResetUltimateJoystick ()
	{
		OnPointerUp( null );
	}
	
	function UpdateHighlightColor ()
	{
		if( showHighlight == false )
			return;
		
		// Check if each variable is assigned so there is not a null reference exception when applying color.
		if( highlightBase != null )
			highlightBase.color = highlightColor;
		if( highlightJoystick != null )
			highlightJoystick.color = highlightColor;
	}
	
	static function GetPosition ( joystickName : String ) : Vector2
	{
		if( !JoystickPositions.ContainsKey( joystickName ) )
			JoystickPositions.Add( joystickName, Vector2.zero );
		
		return JoystickPositions[ joystickName ];
	}
	/* ------------------------------------------- *** END PUBLIC FUNCTIONS FOR THE USER *** ------------------------------------------- */
}