#ifndef LAUNCHPAD_HPP
#define LAUNCHPAD_HPP

#include <WPILib.h>

class Launchpad {
public:
	Launchpad(uint32_t port);
private:
	// The Launchpad
	Joystick * launchpad;
public:
	// Some of the buttons are not connected to the launchpad,
	// so they have been commented out
	
	// Button variables may be renamed with more appropriate names
	
	// Lone switch
	//Button * const SWITCH;
	
	// Row of 4 switches
	//Button * const SWITCH_1;
	Button * const SWITCH_2;
	Button * const SWITCH_3;
	Button * const SWITCH_4;
	
	// Buttons in 3x3
	//Button * const BUTTON;
	Button * const BUTTON_1;
	Button * const BUTTON_2;
	Button * const BUTTON_3;
	Button * const BUTTON_4;
	Button * const BUTTON_5;
	Button * const BUTTON_6;
	Button * const BUTTON_7;
	Button * const BUTTON_8;
	
	// Column of 3 buttons
	//Button * const BUTTON_9;
	//Button * const BUTTON_10;
	//Button * const BUTTON_11;
	
	// Big green buttons
	Button * const GREEN;
	Button * const GREEN_1;
	
	// Big red button
	//Button * const RED;
};


#endif // LAUNCHPAD_HPP
