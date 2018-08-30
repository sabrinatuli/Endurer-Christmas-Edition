/* Written by Kaz Crowe */
/* UltimateJoystickEditor.cs ver. 1.2.5b */
using UnityEngine;
using System.Collections;
using UnityEditor;
using UnityEngine.UI;

[ CanEditMultipleObjects ]
[ CustomEditor( typeof( UltimateJoystick ) ) ]
public class UltimateJoystickEditor : Editor
{
	/* ----- > ASSIGNED VARIABLES < ----- */
	SerializedProperty joystick, joystickSizeFolder;
	SerializedProperty highlightBase, highlightJoystick;
	SerializedProperty tensionAccentUp, tensionAccentDown, tensionAccentLeft, tensionAccentRight;
	SerializedProperty joystickAnimator, joystickBase;

	/* ----- > SIZE AND PLACEMENT < ----- */
	SerializedProperty scalingAxis, anchor, joystickTouchSize;
	SerializedProperty customTouchSize_X, customTouchSize_Y;
	SerializedProperty customTouchSizePos_X, customTouchSizePos_Y;
	SerializedProperty dynamicPositioning;
	SerializedProperty joystickSize, radiusModifier;
	SerializedProperty customSpacing_X, customSpacing_Y;
	SerializedProperty updatePositioningOption;
	
	/* ----- > STYLE AND OPTIONS < ----- */
	SerializedProperty touchPad, throwable, draggable;
	SerializedProperty throwDuration;
	SerializedProperty showHighlight, showTension;
	SerializedProperty highlightColor, tensionColorNone, tensionColorFull;
	SerializedProperty axis, boundary;
	SerializedProperty xDeadZone, yDeadZone, deadZoneOption;

	/* ----- > TOUCH ACTIONS < ----- */
	SerializedProperty useAnimation, useFade;
	SerializedProperty tapCountOption, tapCountDuration;
	SerializedProperty tapCountEvent, targetTapCount;
	SerializedProperty fadeUntouched, fadeTouched;

	/* ----- > SCRIPTING REFERENCE < ----- */
	SerializedProperty joystickName;


	void OnEnable ()
	{
		/* ----- > ASSIGNED VARIABLES < ----- */
		joystick = serializedObject.FindProperty( "joystick" );
		joystickSizeFolder = serializedObject.FindProperty( "joystickSizeFolder" );
        joystickBase = serializedObject.FindProperty("joystickBase");
        highlightBase = serializedObject.FindProperty( "highlightBase" );
		highlightJoystick = serializedObject.FindProperty( "highlightJoystick" );
		tensionAccentUp = serializedObject.FindProperty( "tensionAccentUp" );
		tensionAccentDown = serializedObject.FindProperty( "tensionAccentDown" );
		tensionAccentLeft = serializedObject.FindProperty( "tensionAccentLeft" );
		tensionAccentRight = serializedObject.FindProperty( "tensionAccentRight" );
		joystickAnimator = serializedObject.FindProperty( "joystickAnimator" );
		
		/* ----- > SIZE AND PLACEMENT < ----- */
		scalingAxis = serializedObject.FindProperty( "scalingAxis" );
		anchor = serializedObject.FindProperty( "anchor" );
		joystickTouchSize = serializedObject.FindProperty( "joystickTouchSize" );
		customTouchSize_X = serializedObject.FindProperty( "customTouchSize_X" );
		customTouchSize_Y = serializedObject.FindProperty( "customTouchSize_Y" );
		customTouchSizePos_X = serializedObject.FindProperty( "customTouchSizePos_X" );
		customTouchSizePos_Y = serializedObject.FindProperty( "customTouchSizePos_Y" );
		dynamicPositioning = serializedObject.FindProperty( "dynamicPositioning" );
		joystickSize = serializedObject.FindProperty( "joystickSize" );
		radiusModifier = serializedObject.FindProperty( "radiusModifier" );
		customSpacing_X = serializedObject.FindProperty( "customSpacing_X" );
		customSpacing_Y = serializedObject.FindProperty( "customSpacing_Y" );
		updatePositioningOption = serializedObject.FindProperty( "updatePositioningOption" );
		
		/* ----- > STYLE AND OPTIONS < ----- */
		touchPad = serializedObject.FindProperty( "touchPad" );
		throwable = serializedObject.FindProperty( "throwable" );
		draggable = serializedObject.FindProperty( "draggable" );
		throwDuration = serializedObject.FindProperty( "throwDuration" );
		showHighlight = serializedObject.FindProperty( "showHighlight" );
		highlightColor = serializedObject.FindProperty( "highlightColor" );
		showTension = serializedObject.FindProperty( "showTension" );
		tensionColorNone = serializedObject.FindProperty( "tensionColorNone" );
		tensionColorFull = serializedObject.FindProperty( "tensionColorFull" );
		axis = serializedObject.FindProperty( "axis" );
		boundary = serializedObject.FindProperty( "boundary" );
		deadZoneOption = serializedObject.FindProperty( "deadZoneOption" );
		xDeadZone = serializedObject.FindProperty( "xDeadZone" );
		yDeadZone = serializedObject.FindProperty( "yDeadZone" );

		/* ----- > TOUCH ACTIONS < ----- */
		useAnimation = serializedObject.FindProperty( "useAnimation" );
		useFade = serializedObject.FindProperty( "useFade" );
		tapCountOption = serializedObject.FindProperty( "tapCountOption" );
		tapCountDuration = serializedObject.FindProperty( "tapCountDuration" );
		targetTapCount = serializedObject.FindProperty( "targetTapCount" );
		tapCountEvent = serializedObject.FindProperty( "tapCountEvent" );
		fadeUntouched = serializedObject.FindProperty( "fadeUntouched" );
		fadeTouched = serializedObject.FindProperty( "fadeTouched" );

		/* ----- > SCRIPT REFERENCE < ----- */
		joystickName = serializedObject.FindProperty( "joystickName" );
	}
	
	/*
	For more information on the OnInspectorGUI and adding your own variables
	in the UltimateJoystick.cs script and displaying them in this script,
	see the EditorGUILayout section in the Unity Documentation to help out.
	*/
	public override void OnInspectorGUI ()
	{
		serializedObject.Update();

		// Store the joystick that is currently being selected.
		UltimateJoystick uj = ( UltimateJoystick )target;

		EditorGUILayout.Space();
		
		#region ASSIGNED VARIABLES
		/* ----------------------------------------< ** ASSIGNED VARIABLES ** >---------------------------------------- */
		EditorGUILayout.BeginVertical( "Toolbar" );
		GUILayout.BeginHorizontal();
		EditorGUILayout.LabelField( "Assigned Variables", EditorStyles.boldLabel );
		string v_option = "Show";
		if( EditorPrefs.GetBool( "UUI_Variables" ) == true )
			v_option = "Hide";
		if( GUILayout.Button( v_option, EditorStyles.miniButton, GUILayout.Width( 50 ), GUILayout.Height( 14f ) ) )
		{
			if( EditorPrefs.GetBool( "UUI_Variables" ) == true )
				EditorPrefs.SetBool( "UUI_Variables", false );
			else
				EditorPrefs.SetBool( "UUI_Variables", true );
		}
		GUILayout.EndHorizontal();
		EditorGUILayout.EndVertical();

		if( EditorPrefs.GetBool( "UUI_Variables" ) == true )
		{
			EditorGUILayout.Space();
			EditorGUI.indentLevel = 1;
			EditorGUI.BeginChangeCheck();
			EditorGUILayout.PropertyField( joystick );
			EditorGUILayout.PropertyField( joystickSizeFolder, new GUIContent( "Size Folder" ) );
			EditorGUILayout.PropertyField( joystickBase );
			EditorGUI.indentLevel = 0;
			if( uj.showHighlight == true )
			{
				EditorGUILayout.Space();
				EditorGUILayout.LabelField( "Highlight Variables", EditorStyles.boldLabel );
				EditorGUI.indentLevel = 1;
				EditorGUILayout.PropertyField( highlightBase );
				EditorGUILayout.PropertyField( highlightJoystick );
				EditorGUI.indentLevel = 0;
			}
			if( uj.showTension == true )
			{
				EditorGUILayout.Space();
				EditorGUILayout.LabelField( "Tension Variables", EditorStyles.boldLabel );
				EditorGUI.indentLevel = 1;
				EditorGUILayout.PropertyField( tensionAccentUp, new GUIContent( "Tension Up" ) );
				EditorGUILayout.PropertyField( tensionAccentDown, new GUIContent( "Tension Down" ) );
				EditorGUILayout.PropertyField( tensionAccentLeft, new GUIContent( "Tension Left" ) );
				EditorGUILayout.PropertyField( tensionAccentRight, new GUIContent( "Tension Right" ) );
				EditorGUI.indentLevel = 0;
			}
			if( uj.useAnimation )
			{
				EditorGUILayout.Space();
				EditorGUILayout.LabelField( "Touch Action Variables", EditorStyles.boldLabel );
				EditorGUI.indentLevel = 1;
				EditorGUILayout.PropertyField( joystickAnimator );
				EditorGUI.indentLevel = 0;
			}
			if( EditorGUI.EndChangeCheck() )
				serializedObject.ApplyModifiedProperties();
		}
		/* --------------------------------------< ** END ASSIGNED VARIABLES ** >-------------------------------------- */
		#endregion

		EditorGUILayout.Space();
		
		#region SIZE AND PLACEMENT
		/* ----------------------------------------< ** SIZE AND PLACEMENT ** >---------------------------------------- */
		EditorGUILayout.BeginVertical( "Toolbar" );
		GUILayout.BeginHorizontal();
		EditorGUILayout.LabelField( "Size and Placement", EditorStyles.boldLabel );
		string sap_option = "Show";
		if( EditorPrefs.GetBool( "UUI_SizeAndPlacement" ) == true )
			sap_option = "Hide";
		if( GUILayout.Button( sap_option, EditorStyles.miniButton, GUILayout.Width( 50 ), GUILayout.Height( 14f ) ) )//
		{
			if( EditorPrefs.GetBool( "UUI_SizeAndPlacement" ) == true )
				EditorPrefs.SetBool( "UUI_SizeAndPlacement", false );
			else
				EditorPrefs.SetBool( "UUI_SizeAndPlacement", true );
		}
		GUILayout.EndHorizontal();
		EditorGUILayout.EndVertical();

		if( EditorPrefs.GetBool( "UUI_SizeAndPlacement" ) == true )
		{
			EditorGUILayout.Space();
			EditorGUI.BeginChangeCheck();
			EditorGUILayout.PropertyField( scalingAxis, new GUIContent( "Scaling Axis", "The axis to scale the Ultimate Joystick from." ) );
			EditorGUILayout.PropertyField( anchor, new GUIContent( "Anchor", "The side of the screen that the\njoystick will be anchored to." ) );
			EditorGUILayout.PropertyField( joystickTouchSize, new GUIContent( "Touch Size", "The size of the area in which\nthe touch can be initiated." ) );
			if( uj.joystickTouchSize == UltimateJoystick.JoystickTouchSize.Custom )
			{
				EditorGUILayout.BeginVertical( "Box" );
				EditorGUILayout.LabelField( "Touch Size Customization" );
				EditorGUI.indentLevel = 1;
				EditorGUILayout.Slider( customTouchSize_X, 0.0f, 100.0f, new GUIContent( "Width", "The width of the Joystick Touch Area." ) );
				EditorGUILayout.Slider( customTouchSize_Y, 0.0f, 100.0f, new GUIContent( "Height", "The height of the Joystick Touch Area." ) );
				EditorGUILayout.Slider( customTouchSizePos_X, 0.0f, 100.0f, new GUIContent( "X Position", "The x position of the Joystick Touch Area." ) );
				EditorGUILayout.Slider( customTouchSizePos_Y, 0.0f, 100.0f, new GUIContent( "Y Position", "The y position of the Joystick Touch Area." ) );
				EditorGUILayout.EndVertical();
				EditorGUI.indentLevel = 0;
				EditorGUILayout.Space();
			}
			EditorGUILayout.PropertyField( dynamicPositioning, new GUIContent( "Dynamic Positioning", "Moves the joystick to the position of the initial touch." ) );
			EditorGUILayout.Slider( joystickSize, 1.0f, 4.0f, new GUIContent( "Joystick Size", "The overall size of the joystick." ) );
			EditorGUILayout.Slider( radiusModifier, 2.0f, 7.0f, new GUIContent( "Radius", "Determines how far the joystick can\nmove visually from the center." ) );
			EditorGUILayout.BeginVertical( "Box" );
			EditorGUILayout.LabelField( "Joystick Position" );
			EditorGUI.indentLevel = 1;
			EditorGUILayout.Slider( customSpacing_X, 0.0f, 50.0f, new GUIContent( "X Position:" ) );
			EditorGUILayout.Slider( customSpacing_Y, 0.0f, 100.0f, new GUIContent( "Y Position:" ) );
			EditorGUI.indentLevel = 0;
			EditorGUILayout.EndVertical();
			if( EditorGUI.EndChangeCheck() )
				serializedObject.ApplyModifiedProperties();

			EditorGUI.BeginChangeCheck();
			EditorGUILayout.PropertyField( updatePositioningOption, new GUIContent( "Update Positioning", "How should the positioning be updated?" ) );
			if( EditorGUI.EndChangeCheck() )
			{
				serializedObject.ApplyModifiedProperties();
				UltimateJoystick[] allJoysticks = FindObjectsOfType( typeof( UltimateJoystick ) ) as UltimateJoystick[];
				foreach( UltimateJoystick joy in allJoysticks )
					joy.updatePositioningOption = uj.updatePositioningOption;
			}
		}
		/* --------------------------------------< ** END SIZE AND PLACEMENT ** >-------------------------------------- */
		#endregion

		EditorGUILayout.Space();

		#region STYLE AND OPTIONS
		/* ----------------------------------------< ** STYLE AND OPTIONS ** >----------------------------------------- */
		EditorGUILayout.BeginVertical( "Toolbar" );
		GUILayout.BeginHorizontal();
		EditorGUILayout.LabelField( "Style and Options", EditorStyles.boldLabel );
		string sao_option = "Show";
		if( EditorPrefs.GetBool( "UUI_StyleAndOptions" ) == true )
			sao_option = "Hide";
		if( GUILayout.Button( sao_option, EditorStyles.miniButton, GUILayout.Width( 50 ), GUILayout.Height( 14f ) ) )//
		{
			if( EditorPrefs.GetBool( "UUI_StyleAndOptions" ) == true )
				EditorPrefs.SetBool( "UUI_StyleAndOptions", false );
			else
				EditorPrefs.SetBool( "UUI_StyleAndOptions", true );
		}
		GUILayout.EndHorizontal();
		EditorGUILayout.EndVertical();

		if( EditorPrefs.GetBool( "UUI_StyleAndOptions" ) == true )
		{
			EditorGUILayout.Space();

			// --------------------------< TOUCH PAD >-------------------------- //
			EditorGUI.BeginChangeCheck();
			EditorGUILayout.PropertyField( touchPad, new GUIContent( "Touch Pad", "Disables the visuals of the joystick." ) );
			if( EditorGUI.EndChangeCheck() )
				serializedObject.ApplyModifiedProperties();

			if( uj.touchPad == true )
			{
				if( uj.showHighlight == true )
					uj.showHighlight = false;
				if( uj.showTension == true )
					uj.showTension = false;
				if( uj.joystickBase == null )
					EditorGUILayout.HelpBox( "Joystick Base needs to be assigned in the Assigned Variables section.", MessageType.Error );
				else
					if( uj.joystickBase.GetComponent<Image>().enabled == true )
						uj.joystickBase.GetComponent<Image>().enabled = false;

				if( uj.joystick.GetComponent<Image>().enabled == true )
					uj.joystick.GetComponent<Image>().enabled = false;

				if( uj.dynamicPositioning == false )
					uj.dynamicPositioning = true;

				SetHighlight( uj );
				SetTensionAccent( uj );
			}
			else
			{
				if( uj.joystickBase != null )
				{
					if( uj.joystickBase.GetComponent<Image>().enabled == false )
						uj.joystickBase.GetComponent<Image>().enabled = true;
				}
				if( uj.joystick.GetComponent<Image>().enabled == false )
					uj.joystick.GetComponent<Image>().enabled = true;

				SetHighlight( uj );
				SetTensionAccent( uj );
			}
			// ------------------------< END TOUCH PAD >------------------------ //

			// --------------------------< THROWABLE >-------------------------- //
			EditorGUI.BeginChangeCheck();
			EditorGUILayout.PropertyField( throwable, new GUIContent( "Throwable", "Smoothly transitions the joystick back to\ncenter when the input is released." ) );
			if( EditorGUI.EndChangeCheck() )
				serializedObject.ApplyModifiedProperties();

			if( uj.throwable == true )
			{
				EditorGUI.indentLevel = 1;
				EditorGUI.BeginChangeCheck();
				EditorGUILayout.Slider( throwDuration, 0.05f, 1.0f, new GUIContent( "Throw Duration", "Time in seconds to return to center." ) );
				if( EditorGUI.EndChangeCheck() )
					serializedObject.ApplyModifiedProperties();

				EditorGUI.indentLevel = 0;
				EditorGUILayout.Space();
			}
			// ------------------------< END THROWABLE >------------------------ //

			// --------------------------< DRAGGABLE >-------------------------- //
			EditorGUI.BeginChangeCheck();
			EditorGUILayout.PropertyField( draggable, new GUIContent( "Draggable", "Drags the joystick to follow the touch if it is farther than the radius." ) );
			if( EditorGUI.EndChangeCheck() )
				serializedObject.ApplyModifiedProperties();

			if( uj.draggable == true && uj.boundary == UltimateJoystick.Boundary.Square )
				EditorGUILayout.HelpBox( "Draggable option will force the boundary to being circular. " +
					"Please use a circular boundary when using the draggable option.", MessageType.Warning );
			// ------------------------< END DRAGGABLE >------------------------ //

			// --------------------------< HIGHLIGHT >-------------------------- //
			EditorGUI.BeginDisabledGroup( uj.touchPad == true );// This is the start of the disabled fields if the user is using the touchPad option.
			EditorGUI.BeginChangeCheck();
			EditorGUILayout.PropertyField( showHighlight, new GUIContent( "Show Highlight", "Displays the highlight images with the Highlight Color variable." ) );
			if( EditorGUI.EndChangeCheck() )
			{
				serializedObject.ApplyModifiedProperties();
				SetHighlight( uj );
			}

			if( uj.showHighlight == true )
			{
				EditorGUI.indentLevel = 1;
				EditorGUI.BeginChangeCheck();
				EditorGUILayout.PropertyField( highlightColor );
				if( EditorGUI.EndChangeCheck() )
				{
					serializedObject.ApplyModifiedProperties();
					uj.UpdateHighlightColor();
				}

				if( uj.highlightBase == null && uj.highlightJoystick == null )
					EditorGUILayout.HelpBox( "No highlight images have been assigned. Please assign some highlight images before continuing.", MessageType.Error );

				EditorGUI.indentLevel = 0;
				EditorGUILayout.Space();
			}
			// ------------------------< END HIGHLIGHT >------------------------ //

			// ---------------------------< TENSION >--------------------------- //
			EditorGUI.BeginChangeCheck();
			EditorGUILayout.PropertyField( showTension, new GUIContent( "Show Tension", "Displays the visual direction of the joystick using the tension color options." ) );
			if( EditorGUI.EndChangeCheck() )
			{
				serializedObject.ApplyModifiedProperties();
				SetTensionAccent( uj );
			}

			if( uj.showTension == true )
			{
				EditorGUI.indentLevel = 1;
				EditorGUI.BeginChangeCheck();
				EditorGUILayout.PropertyField( tensionColorNone, new GUIContent( "Tension None", "The color displayed when the joystick\nis closest to center." ) );
				EditorGUILayout.PropertyField( tensionColorFull, new GUIContent( "Tension Full", "The color displayed when the joystick\nis at the furthest distance." ) );
				if( EditorGUI.EndChangeCheck() )
					serializedObject.ApplyModifiedProperties();

				if( uj.tensionAccentUp == null || uj.tensionAccentDown == null || uj.tensionAccentLeft == null || uj.tensionAccentRight == null )
					EditorGUILayout.HelpBox( "Some tension accents are unassigned. Please assign all images before continuing.", MessageType.Error );
				else
					TensionAccentReset( uj );

				EditorGUI.indentLevel = 0;
				EditorGUILayout.Space();
			}
			// -------------------------< END TENSION >------------------------- //

			EditorGUI.EndDisabledGroup();// This is the end for the Touch Pad option.

			// -----------------------------< AXIS >---------------------------- //
			EditorGUI.BeginChangeCheck();
			EditorGUILayout.PropertyField( axis, new GUIContent( "Axis", "Contrains the joystick to a certain axis." ) );
			if( EditorGUI.EndChangeCheck() )
				serializedObject.ApplyModifiedProperties();
			if( uj.axis != UltimateJoystick.Axis.Both && uj.draggable == true )
			{
				EditorGUI.indentLevel = 1;
				EditorGUILayout.HelpBox( "The Draggable option is not compatible with an axis contraint.", MessageType.Error );
				EditorGUI.indentLevel = 0;
				EditorGUILayout.Space();
			}
			// ---------------------------< END AXIS >-------------------------- //

			// ---------------------------< BOUNDARY >-------------------------- //
			EditorGUI.BeginChangeCheck();
			EditorGUILayout.PropertyField( boundary, new GUIContent( "Boundry", "Determines how the joystick's position is clamped." ) );
			if( EditorGUI.EndChangeCheck() )
				serializedObject.ApplyModifiedProperties();
			// -------------------------< END BOUNDARY >------------------------ //

			// --------------------------< DEAD ZONE >-------------------------- //
			EditorGUI.BeginChangeCheck();
			EditorGUILayout.PropertyField( deadZoneOption, new GUIContent( "Dead Zone", "Forces the joystick position to being only values of -1, 0, and 1." ) );
			if( uj.deadZoneOption != UltimateJoystick.DeadZoneOption.DoNotUse )
			{
				EditorGUI.indentLevel = 1;
				if( uj.deadZoneOption == UltimateJoystick.DeadZoneOption.TwoValues )
				{
					EditorGUILayout.Slider( xDeadZone, 0.0f, 1.0f, new GUIContent( "X Dead Zone", "X values within this range will be forced to 0." ) );
					EditorGUILayout.Slider( yDeadZone, 0.0f, 1.0f, new GUIContent( "Y Dead Zone", "Y values within this range will be forced to 0." ) );
				}
				else
				{
					EditorGUILayout.Slider( xDeadZone, 0.0f, 1.0f, new GUIContent( "Dead Zone", "Values within this range will be forced to 0." ) );
					uj.yDeadZone = uj.xDeadZone;
				}
				EditorGUI.indentLevel = 0;
			}
			if( EditorGUI.EndChangeCheck() )
				serializedObject.ApplyModifiedProperties();
			// ------------------------< END DEAD ZONE >------------------------ //
		}
		/* --------------------------------------< ** END STYLE AND OPTIONS ** >------------------------------------- */
		#endregion
		
		EditorGUILayout.Space();
		
		#region TOUCH ACTIONS
		/* ------------------------------------------< ** TOUCH ACTIONS ** >----------------------------------------- */
		EditorGUILayout.BeginVertical( "Toolbar" );
		GUILayout.BeginHorizontal();
		EditorGUILayout.LabelField( "Touch Actions", EditorStyles.boldLabel );
		string ta_option = "Show";
		if( EditorPrefs.GetBool( "UUI_TouchActions" ) == true )
			ta_option = "Hide";
		if( GUILayout.Button( ta_option, EditorStyles.miniButton, GUILayout.Width( 50 ), GUILayout.Height( 14f ) ) )//
		{
			if( EditorPrefs.GetBool( "UUI_TouchActions" ) == true )
				EditorPrefs.SetBool( "UUI_TouchActions", false );
			else
				EditorPrefs.SetBool( "UUI_TouchActions", true );
		}
		GUILayout.EndHorizontal();
		EditorGUILayout.EndVertical();

		if( EditorPrefs.GetBool( "UUI_TouchActions" ) == true )
		{
			EditorGUILayout.Space();
			EditorGUI.BeginChangeCheck();
			EditorGUILayout.PropertyField( tapCountOption, new GUIContent( "Tap Count", "Allows the joystick to calculate double taps and a touch and release within a certain time window." ) );
			if( EditorGUI.EndChangeCheck() )
				serializedObject.ApplyModifiedProperties();

			if( uj.tapCountOption != UltimateJoystick.TapCountOption.NoCount )
			{
				EditorGUI.indentLevel = 1;
				EditorGUI.BeginChangeCheck();
				EditorGUILayout.PropertyField( tapCountEvent );
				EditorGUILayout.Slider( tapCountDuration, 0.0f, 1.0f, new GUIContent( "Tap Time Window", "Time in seconds that the joystick can recieve taps." ) );
				if( uj.tapCountOption == UltimateJoystick.TapCountOption.Accumulate )
					EditorGUILayout.IntSlider( targetTapCount, 1, 5, new GUIContent( "Target Tap Count", "How many taps to activate the Tap Count Event?" ) );
				if( EditorGUI.EndChangeCheck() )
					serializedObject.ApplyModifiedProperties();

				EditorGUI.indentLevel = 0;
				EditorGUILayout.Space();
			}

			EditorGUI.BeginChangeCheck();
			EditorGUILayout.PropertyField( useAnimation, new GUIContent( "Use Animation", "Play animation in reaction to input." ) );
			if( EditorGUI.EndChangeCheck() )
			{
				serializedObject.ApplyModifiedProperties();
				SetAnimation( uj );
			}
			if( uj.useAnimation == true )
			{
				EditorGUI.indentLevel = 1;
				if( uj.joystickAnimator == null )
					EditorGUILayout.HelpBox( "Joystick Animator needs to be assigned.", MessageType.Error );
				EditorGUI.indentLevel = 0;
			}

			EditorGUI.BeginChangeCheck();
			EditorGUILayout.PropertyField( useFade, new GUIContent( "Use Fade", "Fade joystick visuals when touched,\nand released?" ) );
			if( EditorGUI.EndChangeCheck() )
			{
				serializedObject.ApplyModifiedProperties();
				if( uj.useFade == true )
					uj.gameObject.GetComponent<CanvasGroup>().alpha = uj.fadeUntouched;
				else
					uj.gameObject.GetComponent<CanvasGroup>().alpha = 1.0f;
			}
			if( uj.useFade == true )
			{
				EditorGUI.indentLevel = 1;
				EditorGUI.BeginChangeCheck();
				EditorGUILayout.Slider( fadeUntouched, 0.0f, 1.0f, new GUIContent( "Fade Untouched", "The alpha of the joystick when it is NOT receiving input." ) );
				EditorGUILayout.Slider( fadeTouched, 0.0f, 1.0f, new GUIContent( "Fade Touched", "The alpha of the joystick when receiving input." ) );
				if( EditorGUI.EndChangeCheck() )
				{
					serializedObject.ApplyModifiedProperties();
					uj.gameObject.GetComponent<CanvasGroup>().alpha = uj.fadeUntouched;
				}

				EditorGUI.indentLevel = 0;
			}
		}
		/* ------------------------------------------< ** END TOUCH ACTIONS ** >------------------------------------------ */
		#endregion
		
		EditorGUILayout.Space();

		#region SCRIPT REFERENCE
		/* ------------------------------------------< ** SCRIPT REFERENCE ** >------------------------------------------- */
		EditorGUILayout.BeginVertical( "Toolbar" );
		GUILayout.BeginHorizontal();
		EditorGUILayout.LabelField( "Script Reference", EditorStyles.boldLabel );
		string rtd_option = "Show";
		if( EditorPrefs.GetBool( "UUI_ScriptReference" ) == true )
			rtd_option = "Hide";
		if( GUILayout.Button( rtd_option, EditorStyles.miniButton, GUILayout.Width( 50 ), GUILayout.Height( 14f ) ) )
		{
			if( EditorPrefs.GetBool( "UUI_ScriptReference" ) == true )
				EditorPrefs.SetBool( "UUI_ScriptReference", false );
			else
				EditorPrefs.SetBool( "UUI_ScriptReference", true );
		}
		GUILayout.EndHorizontal();
		EditorGUILayout.EndVertical();
		
		if( EditorPrefs.GetBool( "UUI_ScriptReference" ) == true )
		{
			EditorGUILayout.Space();
			EditorGUI.BeginChangeCheck();
			EditorGUILayout.PropertyField( joystickName );
			if( EditorGUI.EndChangeCheck() )
				serializedObject.ApplyModifiedProperties();
			
			if( uj.joystickName == string.Empty )
				EditorGUILayout.HelpBox( "Please assign a Joystick Name in order to be able to get this joystick's position dynamically.", MessageType.Warning );
			else
			{
				EditorGUILayout.LabelField( "Script Reference:" );
				EditorGUILayout.TextField( "UltimateJoystick.GetPosition( \"" + uj.joystickName + "\" )" );
			}
		}
		/* -----------------------------------------< ** END SCRIPT REFERENCE ** >---------------------------------------- */
		#endregion

		EditorGUILayout.Space();

		/* ----------------------------------------------< ** HELP TIPS ** >---------------------------------------------- */
		if( uj.joystick == null )
			EditorGUILayout.HelpBox( "Joystick needs to be assigned in 'Assigned Variables'!", MessageType.Error );
		if( uj.joystickSizeFolder == null )
			EditorGUILayout.HelpBox( "Joystick Size Folder needs to be assigned in 'Assigned Variables'!", MessageType.Error );
		if( uj.joystickBase == null )
			EditorGUILayout.HelpBox( "Joystick Base needs to be assigned in 'Assigned Variables'!", MessageType.Error );
		/* --------------------------------------------< ** END HELP TIPS ** >-------------------------------------------- */
	}

	#region GET AND SET FUNCTIONS
	CanvasScaler GetParentCanvas ( UltimateJoystick joystick )
	{
		Transform parent = joystick.transform.parent;
		while( parent != null )
		{ 
			if( parent.transform.GetComponent<CanvasScaler>() )
				return parent.transform.GetComponent<CanvasScaler>();

			parent = parent.transform.parent;
		}
		return null;
	}
	
	void SetHighlight ( UltimateJoystick uj )
	{
		if( uj.showHighlight == true )
		{
			if( uj.highlightBase != null && uj.highlightBase.gameObject.activeInHierarchy == false )
				uj.highlightBase.gameObject.SetActive( true );
			if( uj.highlightJoystick != null && uj.highlightJoystick.gameObject.activeInHierarchy == false )
				uj.highlightJoystick.gameObject.SetActive( true );

			uj.UpdateHighlightColor();
		}
		else
		{
			if( uj.highlightBase != null && uj.highlightBase.gameObject.activeInHierarchy == true )
				uj.highlightBase.gameObject.SetActive( false );
			if( uj.highlightJoystick != null && uj.highlightJoystick.gameObject.activeInHierarchy == true )
				uj.highlightJoystick.gameObject.SetActive( false );
		}
	}

	void SetTensionAccent ( UltimateJoystick uj )
	{
		if( uj.showTension == true )
		{
			if( uj.tensionAccentUp == null || uj.tensionAccentDown == null || uj.tensionAccentLeft == null || uj.tensionAccentRight == null )
				return;

			if( uj.tensionAccentUp != null && uj.tensionAccentUp.gameObject.activeInHierarchy == false )
				uj.tensionAccentUp.gameObject.SetActive( true );
			if( uj.tensionAccentDown != null && uj.tensionAccentDown.gameObject.activeInHierarchy == false )
				uj.tensionAccentDown.gameObject.SetActive( true );
			if( uj.tensionAccentLeft != null && uj.tensionAccentLeft.gameObject.activeInHierarchy == false )
				uj.tensionAccentLeft.gameObject.SetActive( true );
			if( uj.tensionAccentRight != null && uj.tensionAccentRight.gameObject.activeInHierarchy == false )
				uj.tensionAccentRight.gameObject.SetActive( true );

			TensionAccentReset( uj );
		}
		else
		{
			if( uj.tensionAccentUp != null && uj.tensionAccentUp.gameObject.activeInHierarchy == true )
				uj.tensionAccentUp.gameObject.SetActive( false );
			if( uj.tensionAccentDown != null && uj.tensionAccentDown.gameObject.activeInHierarchy == true )
				uj.tensionAccentDown.gameObject.SetActive( false );
			if( uj.tensionAccentLeft != null && uj.tensionAccentLeft.gameObject.activeInHierarchy == true )
				uj.tensionAccentLeft.gameObject.SetActive( false );
			if( uj.tensionAccentRight != null && uj.tensionAccentRight.gameObject.activeInHierarchy == true )
				uj.tensionAccentRight.gameObject.SetActive( false );
		}
	}

	void TensionAccentReset ( UltimateJoystick uj )
	{
		uj.tensionAccentUp.color = uj.tensionColorNone;
		uj.tensionAccentDown.color = uj.tensionColorNone;
		uj.tensionAccentLeft.color = uj.tensionColorNone;
		uj.tensionAccentRight.color = uj.tensionColorNone;
	}

	void SetAnimation ( UltimateJoystick uj )
	{
		if( uj.useAnimation == true )
		{
			if( uj.joystickAnimator != null )
				if( uj.joystickAnimator.enabled == false )
					uj.joystickAnimator.enabled = true;
		}
		else
		{
			if( uj.joystickAnimator != null )
				if( uj.joystickAnimator.enabled == true )
					uj.joystickAnimator.enabled = false;
		}
	}
	#endregion
}