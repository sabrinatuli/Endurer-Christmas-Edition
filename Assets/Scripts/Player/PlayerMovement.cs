using UnityEngine;

public class PlayerMovement : MonoBehaviour {
	
	// The speed that the player will move at.
	public float speed = 6f;   
	Transform myTransform;
	
	// The vector to store the direction of the player's movement.
	Vector3 movement;
	Vector2 lookJoyPosition;
	float camRotationX;
	// Reference to the animator component.
	Animator anim;    
	// Reference to the player's rigidbody.
	Vector2 joystickRightPos;
	Rigidbody playerRigidbody;
	Transform mainCamera;
	public Transform playerCameraPivot;
	public float moveSpeed = 10.0f;
	public float cameraRotationSpeed = 2.5f;
	// A layer mask so that a ray can be cast just at gameobjects on the floor layer.
	int floorMask;    
	// The length of the ray from the camera into the scene.
	float camRayLength = 100f;  
	
	
	void Awake() {
		// Create a layer mask for the floor layer.
		floorMask = LayerMask.GetMask("Floor");
		
		// Set up references.
		anim = GetComponent<Animator>();
		playerRigidbody = GetComponent<Rigidbody>();
		myTransform = GetComponent<Transform>();
		
		if( Camera.main == null )
		{
			Debug.LogError( "Camera needs to be tagged as 'MainCamera' in order for the character controller to work correctly. " +
			               "Please assign the player's camera as the main camera." );
			
			return;
		}
		
		mainCamera = Camera.main.transform;
		
	}
	
	void FixedUpdate() {
		// Store the input axes.
		Vector2 joystickLeftPos = UltimateJoystick.GetPosition( "Movement" );
		// float h = Input.GetAxisRaw("Horizontal");
		//float v = Input.GetAxisRaw("Vertical");
		float h = joystickLeftPos.x;
		float v = joystickLeftPos.y;
		
		// Move the player around the scene.
		
		///////////////Add for camera//////////////
		//if( playerCameraPivot != null )
		//	playerCameraPivot.position = myTransform.position;
		
		// Store the look joystick's position.
		lookJoyPosition = UltimateJoystick.GetPosition( "Camera" );
		Debug.Log("Enter");
		
		// If the user is touching the look joystick...
		if( lookJoyPosition != Vector2.zero )
		{
			
			// Store the look joystick's X position.
			camRotationX = lookJoyPosition.x;
			
			// Modify the X rotation by the speed variable.
			camRotationX *= cameraRotationSpeed;
			
			// Rotate the camera's pivot by the X rotation.
			playerCameraPivot.Rotate( 0, camRotationX, 0, Space.World );
			
			
			
		}
		Move (h, v);
		/////////////////////////////////////////////////
		// Turn the player to face the mouse cursor.
		joystickRightPos = UltimateJoystick.GetPosition( "Shoot" );
		if (joystickRightPos != Vector2.zero) 
		{
			Turning ();
		}
		
		// Animate the player.
		Animating (h, v);
	}
	
	void Move(float h, float v) {
		// Set the movement vector based on the axis input.
		
		movement.Set (h, 0f, v);
		
		
		// Normalise the movement vector and make it proportional to the speed per second.
		movement = movement.normalized * speed * Time.deltaTime;
		
		// Move the player to it's current position plus the movement.
		playerRigidbody.MovePosition(transform.position + movement);
		
	}
	
	void Turning() {
		// Create a ray from the mouse cursor on screen in the direction of the camera.
		
		Vector3 movementDirection = new Vector3( joystickRightPos.x, 0, joystickRightPos.y );
		
		// Ray camRay = Camera.main.ScreenPointToRay(joystickLeftPos);
		Ray camRay = Camera.main.ScreenPointToRay (movementDirection);
		
		// Create a RaycastHit variable to store information about what was hit by the ray.
		RaycastHit floorHit;
		
		// Perform the raycast and if it hits something on the floor layer...
		if (Physics.Raycast (camRay, out floorHit, camRayLength, floorMask)) {
			// Create a vector from the player to the point on the floor the raycast from the mouse hit.
			//Vector3 playerToMouse = floorHit.point - transform.position;
			Vector3 playerToMouse = new Vector3( joystickRightPos.x, 0, joystickRightPos.y );
			
			// Ensure the vector is entirely along the floor plane.
			playerToMouse.y = 0f;
			
			// Create a quaternion (rotation) based on looking down the vector from the player to the mouse.
			Quaternion newRotation = Quaternion.LookRotation(playerToMouse);
			
			// Set the player's rotation to this new rotation.
			playerRigidbody.MoveRotation(newRotation);
		}
	}
	
	void Animating(float h, float v) {
		// Create a boolean that is true if either of the input axes is non-zero.
		bool walking = h != 0f || v != 0f;
		
		// Tell the animator whether or not the player is walking.
		anim.SetBool("IsWalking", walking);
	}
}