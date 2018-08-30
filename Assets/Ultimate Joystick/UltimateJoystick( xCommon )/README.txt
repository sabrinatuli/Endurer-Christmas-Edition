Thank you for purchasing the Ultimate Joystick UnityPackage!

This package comes with both C# and Javascript coding languages for all needed scripts,
so please feel free to use which ever coding language you are most comfortable with.
However, please do not modify the scripts at all. Please make your own scripts for
character controllers. 

/* ------- < IMPORTANT INFORMATION > ------- */
Within Unity, please go to Window / Ultimate Joystick to access important information on how to get started
using the Ultimate Joystick. There are links in that window to an extensive Online Readme, complete Documentation,
and FREE example scripts to get you started as fast as possible!
/* ----- < END IMPORTANT INFORMATION > ----- */


// --- IF YOU CAN'T VIEW THE ONLINE INFORMATION, READ THIS SECTION --- //
Please note that there is a C# AND Javascript version of the UltimateJoystick, UltimateJoystickEditor and the
CapsuleManController scripts. We also included C# and Javascript prefabs located in a folder named Resources, which
must remain in the Resources folder. Also, please note that we are using our own custom inspector, and these Editor
scripts are located in the Ultimate Joystick folder in a folder named "Editor". You must leave these scripts in this
folder in order for the Editor scripts to work correctly.

// --- HOW TO USE THE ULTIMATE JOYSTICK --- //
One of the great things about the Ultimate Joystick is the easy reference from other scripts. The first thing that
you will want to make sure to do is name the joystick in the Script Reference section. After that, we can refernce
that particular Joystick by it's name. After the joystick has been named, we can get that joystick's position by
creating a Vector2 variable at runtime by calling a static function. This Vector2 will be the Ultimate Joystick's
position. Keep in mind that the Ultimate Joystick's LEFT AND RIGHT movement are translated into this Vector2's X
value, while the UP AND DOWN movement are the Vector2's Y value. Keep that in mind when applying the Ultimate
Joystick's position to characters.

For this example, let's assume that the joystick's name is Movement. In order to get that joystick's position, call
the static GetPosition function, and pass the desired joystick's name.

/* ------ < EXAMPLE > ------ */
EXAMPLE C#:
	Vector2 joystickPosition = UltimateJoystick.GetPosition( "Movement" );
EXAMPLE Java:
	var joystickPosition : Vector2 = UltimateJoystickJAVA.GetPosition( "Movement" );

After this, the joystickPosition variable can be used in anything that needs joystick input. For example, if you are
wanting to put the joystick's position into a character's movement script, you would create a Vector3 variable for
movement direction, and put in the appropriate values of the Ultimate Joystick's position.

/* ------ < EXAMPLE > ------ */
EXAMPLE C#:
	Vector3 movementDirection = new Vector3( joystickPosition.x, 0, joystickPosition.y );
EXAMPLE Java:
	var movementDirection : Vector3 = new Vector3( joystickPosition.x, 0, joystickPosition.y );

In the above example, the joystickPosition variable is used to give the movement direction values in the X and Z spots.
This is because you generally don't want your character to move in the Y direction unless the user jumps. That is why
we put the joystickPosition's Y value into the Z value of the movementDirection variable.

Understanding how to use the values from any input is important when creating character controllers, so experiment with
the values to try and understand how the mobile input can be used for different ways.