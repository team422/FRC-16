#ifndef LAUNCHPAD_HPP_
#define LAUNCHPAD_HPP_

class Launchpad {
public:
    Launchpad(uint32_t port);

private:
    Joystick *launchpad_controller;
    
public:
    //Button * const LEFT_MOST_SWITCH; not connected
    Button * const LEFT_MIDDLE_SWITCH;
    Button * const RIGHT_MIDDLE_SWITCH;
    Button * const RIGHT_MOST_SWITCH;
    Button * const RED_BUTTON;
    Button * const LEFT_BIG_GREEN_BUTTON;
    Button * const RIGHT_BIG_GREEN_BUTTON;
    //Button * const UPPER_BUTTON; nc
    //Button * const MIDDLE_BUTTON; nc
    //Button * const LOWER_BUTTON; nc
    //Button * const LONE_SWITCH; nc
    //Button * const ARRAY_LEFT_LEFT_BUTTON; nc
    Button  * const ARRAY_
}

#endif
