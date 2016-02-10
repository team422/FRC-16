#ifndef LAUNCHPAD_HPP
#define LAUNCHPAD_HPP

#include <WPILib.h>

class Launchpad {
public:
	// Button variables may be renamed
	// Lone switch
	Button * const SWITCH;
	
	// Switches in 1x4 configuration
	Button * const SWITCH_1;
	Button * const SWITCH_2;
	Button * const SWITCH_3;
	Button * const SWITCH_4;
	
	// Buttons in 3x3 configuration
	Button * const BUTTON;
	Button * const BUTTON_1;
	Button * const BUTTON_2;
	Button * const BUTTON_3;
	Button * const BUTTON_4;
	Button * const BUTTON_5;
	Button * const BUTTON_6;
	Button * const BUTTON_7;
	Button * const BUTTON_8;
	
	// Buttons in 1x3 configuration
	Button * const BUTTON_9;
	Button * const BUTTON_10;
	Button * const BUTTON_11;
	
	// Big green buttons
	Button * const GREEN;
	Button * const GREEN_1;
	
	// Big red button
	Button * const RED;
};


#endif // LAUNCHPAD_HPP
