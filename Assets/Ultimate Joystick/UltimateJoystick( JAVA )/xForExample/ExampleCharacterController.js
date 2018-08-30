/* Written by Kaz Crowe */
/* ExampleCharacterController.js ver 1.0 */
#pragma strict
@script RequireComponent( Rigidbody );

private var myTransform : Transform;
private var myRigidbody : Rigidbody;
public var playerCameraPivot : Transform;
private var mainCamera : Transform;
private var cameraForward : Vector3;
public var moveSpeed : float = 10.0;
public var cameraRotationSpeed : float = 2.5;
public var jumpHeight : float = 5.0;


function Start ()
{
	myTransform = GetComponent( Transform );
	myRigidbody = GetComponent( Rigidbody );

	if( Camera.main == null )
	{
		Debug.LogError( "Camera needs to be tagged as 'MainCamera' in order for the character controller to work correctly. " +
			"Please assign the player's camera as the main camera." );

		return;
	}

	mainCamera = Camera.main.transform;
}

function FixedUpdate ()
{
	// Store the move joystick's position.
	var moveJoyPosition : Vector2 = UltimateJoystickJAVA.GetPosition( "Movement" );

	// If the user is touching the joystick for movement...
	if( moveJoyPosition != Vector2.zero )
	{
		// Get the camera's forward, zero out the Y property, and normalize the values.
		cameraForward = Vector3.Scale( mainCamera.forward, new Vector3( 1, 0, 1 ) ).normalized;

		// Put the joystick's position values into a Vector3 for movement.
		var movement : Vector3 = ( moveJoyPosition.y * cameraForward + moveJoyPosition.x * mainCamera.right );

		// Add the force of the above Vector3 multiplied by the moveSpeed variable.
		myRigidbody.AddForce( movement * moveSpeed );
	}

	// If the camera pivot is assigned, follow the player.
	if( playerCameraPivot != null )
		playerCameraPivot.position = myTransform.position;

	// Store the look joystick's position.
	var lookJoyPosition : Vector2 = UltimateJoystickJAVA.GetPosition( "Camera" );

	// If the user is touching the look joystick...
	if( lookJoyPosition != Vector2.zero )
	{
		// Store the look joystick's X position.
		var camRotationX : float = lookJoyPosition.x;
		
		// Modify the X rotation by the speed variable.
		camRotationX *= cameraRotationSpeed;
		
		// Rotate the camera's pivot by the X rotation.
		playerCameraPivot.Rotate( 0, camRotationX, 0, Space.World );
	}
}

public function PlayerJump ()
{
	// Raycast downward to check for ground. 0.5 is exact distance to the ground, so add a small distance more( 0.01 ).
	if( Physics.Raycast( myTransform.position, Vector3.down, 0.51 ) )
	{
		// Create the jump height Vector to add to the rigidbody.
		var jumpVector : Vector3 = new Vector3( 0, jumpHeight, 0 );
		myRigidbody.velocity = jumpVector;
	}
}