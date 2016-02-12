#include "launchpad.hpp"
#include <WPILib.h>

Launchpad::Launchpad(uint32_t port) : 
//Joystick controller for launchpad
controller( new Joystick(port) ),

//Switches in 1x4 horizontal orientation
LEFT_MOST_SWITCH( new JoystickButton(controller, unknown) );
LEFT_MIDDLE_SWITCH( new JoystickButton(controller, 6) );
RIGHT_MIDDLE_SWITCH( new JoystickButton(controller, 12) );
RIGHT_MOST_SWITCH( new JoystickButton(controller, 8) );

//Large red button
RED_BUTTON( new JoystickButton(controller, unknown) );

//Large green buttons, 1x2 horizontal orientation
LEFT_LARGE_GREEN_BUTTON( new JoystickButton(controller, 2) );
RIGHT_LARGE_GREEN_BUTTON( new JoystickButton(controller, 3) );

//Small green buttons, 1x3 vertical orientation
UPPER_BUTTON( new JoystickButton(controller, unknown) );
MIDDLE_BUTTON( new JoystickButton(controller, unknown) );
LOWER_BUTTON( new JoystickButton(controller, unknown) );

//Lone switch
LONE_SWITCH( new JoystickButton(controller, unknown) );

//Small green buttons, 3x3 orientation
UPPER_LEFT_BUTTON( new JoystickButton(controller, unknown) );
UPPER_MIDDLE_BUTTON( new JoystickButton(controller, 13) );
UPPER_RIGHT_BUTTON( new JoystickButton(controller, 1) );
MIDDLE_LEFT_BUTTON( new JoystickButton(controller, 9) );
MIDDLE_MIDDLE_BUTTON( new JoystickButton(controller, 11) );
MIDDLE_RIGHT_BUTTON( new JoystickButton(controller, 14) );
LOWER_LEFT_BUTTON( new JoystickButton(controller, 10) );
LOWER_MIDDLE_BUTTON( new JoystickButton(controller, 16) );
LOWER_RIGHT_BUTTON( new JoystickButton(controller, 15) ); {
}
