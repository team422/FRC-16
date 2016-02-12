#include "launchpad_class.hpp"

#include <WPILib.h>

Launchpad::Launchpad(uint_32 port) :
launchpad( new Launchpad(port) ),
BIG_BUTTON_1( new JoystickButton(launchpad, 2)),
BIG_BUTTON_2( new JoystickButton(launchpad, 3)),
SWITCH_2( new JoystickButton(launchpad, 6)),
SWITCH_3( new JoystickButton(launchpad, 12)),
SWITCH_4( new JoystickButton(launchpad, 8)),
UPPER_MID_BUTTON( new JoystickButton(launchpad, 13)),
UPPER_RIGHT_BUTTON( new JoystickButton(launchpad, 1)),
MIDDLE_LEFT_BUTTON( new JoystickButton(launchpad, 9)),
MIDDLE_MID_BUTTON( new JoystickButton(launchpad, 11)),
MIDDLE_RIGHT_BUTTON( new JoystickButton(launchpad, 14)),
BOTTOM_LEFT( new JoystickButton(launchpad, 10)),
BOTTOM_MID_BUTTON( new JoystickButton(launchpad, 16)),
BOTTOM_RIGHT_BUTTON( new JoystickButton(launchpad, 15)) {
}

//Didn't include other functions for deadzones and such because, as before, there are no joysticks on the launchpad.
