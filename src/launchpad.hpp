#ifndef LAUNCHPAD_HPP_
#define LAUNCHPAD_HPP_

#include <WPILib.h>

class Launchpad {
public:
    Launchpad(uint32_t port);

private:
    Joystick *controller;
    
public:
    /*Listing for all buttons and switches on the launchpad, 
    commented buttons are not connected */
    
    //Switches in the 1x4 orientation
    //Button * const LEFT_MOST_SWITCH; 
    Button * const LEFT_MIDDLE_SWITCH;
    Button * const RIGHT_MIDDLE_SWITCH;
    Button * const RIGHT_MOST_SWITCH;
    
    //Large red button
    //Button * const RED_BUTTON;
    
    //Two large green buttons
    Button * const LEFT_LARGE_GREEN_BUTTON;
    Button * const RIGHT_LARGE_GREEN_BUTTON;
    
    //Buttons in vertical 1x3 configuration
    //Button * const UPPER_BUTTON; 
    //Button * const MIDDLE_BUTTON; 
    //Button * const LOWER_BUTTON; 
    
    //Lone switch
    //Button * const LONE_SWITCH; 
    
    //Buttons in the 3x3 orientation
    //Button * const UPPER_LEFT_BUTTON; 
    Button * const UPPER_MIDDLE_BUTTON;
    Button * const UPPER_RIGHT_BUTTON;
    Button * const MIDDLE_LEFT_BUTTON;
    Button * const MIDDLE_MIDDLE_BUTTON;
    Button * const MIDDLE_RIGHT_BUTTON;
    Button * const LOWER_LEFT_BUTTON;
    Button * const LOWER_MIDDLE_BUTTON;
    Button * const LOWER_RIGHT_BUTTON;
};

#endif
