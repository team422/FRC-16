#ifndef LAUNCHPAD_HPP
#define LAUNCHPAD_HPP

#include <WPILib.h>

class Launchpad {
public:
	Launchpad(uint32_t port);
private:
	Joystick * launchpad;
public:
	// Some of the buttons are not connected to the launchpad,
	// but are left and commented to keep the buttons in order
	
	// Button variables may need to be renamed with more
	// appropriate names
	
	// Lone switch
	//Button * const LONE_SWITCH;
	
	// Row of 4 switches
	//Button * const SWITCH_1;
	Button * const SWITCH_2;
	Button * const SWITCH_3;
	Button * const SWITCH_4;
	
	// Buttons in 3x3 square
	// 1, 2, and 3 are in the top row
	// 4, 5, and 6 are in the middle row
	// 7, 8, and 9 are in the bottom row
	//Button * const BUTTON_1;
	Button * const BUTTON_2;
	Button * const BUTTON_3;
	Button * const BUTTON_4;
	Button * const BUTTON_5;
	Button * const BUTTON_6;
	Button * const BUTTON_7;
	Button * const BUTTON_8;
	Button * const BUTTON_9;
	
	// Column of 3 buttons
	//Button * const COLUMN_1;
	//Button * const COLUMN_2;
	//Button * const COLUMN_3;
	
	// Big green buttons
	Button * const GREEN_1;
	Button * const GREEN_2;
	
	// Big red button
	//Button * const RED;
};


#endif // LAUNCHPAD_HPP
