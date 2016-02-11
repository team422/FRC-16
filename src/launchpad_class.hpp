#ifndef LAUNCHPAD_CLASS_HPP
#define LAUNCHPAD_CLASS_HPP

#include <WPILib.h>

class Launchpad {
  //Probably don't methods like the ones in Xbox for GetX/GetY because there are no joysticks
  public:
    //Buttons that are commented out are not plugged in, but are included so a logical order can be followed
    Button * const BIG_BUTTON_1;
    Button * const BIG_BUTTON_2;
    //Button * const SWITCH_1;
    Button * const SWITCH_2;
    Button * const SWITCH_3;
    Button * const SWITCH_4;
    //Button *BIG_RED_BUTTON;
    //Button * UPPER_LEFT_BUTTON;
    Button * UPPER_MID_BUTTON;
    Button * UPPER_RIGHT_BUTTON;
    Button * MIDDLE_LEFT_BUTTON;
    Button * MIDDLE_MID_BUTTON;
    Button * MIDDLE_RIGHT_BUTTON;
    Button * BOTTOM_LEFT_BUTTON;
    Button * BOTTOM_MID_BUTTON;
    Button * BOTTOM_RIGHT_BUTTON;
    //Button * BIG_SWITCH;
    //Button * TOP_COLUMN_BUTTON;
    //Button * MID_COLUMN_BUTTON;
    //Button * BOTTOM_COLUMN_BUTTON;

  private:
    Launchpad * launchpad
}
#endif //LAUNCHPAD_CLASS_HPP
