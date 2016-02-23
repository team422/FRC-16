/*
 * launchpad.hpp
 *
 *  Created on: Feb 22, 2016
 *      Author: Eric R. Campbell
 */

#pragma once

#include <WPILib.h>

class Launchpad {
public:
	Launchpad(uint32_t port);

private:
	Joystick * launchpad;

public:
	//Buttons that are not connected on the launchpad are
	//included in the Launchpad class, but are left commented

	//Button variables can be renamed at need

	//Isolated switch
	//Button const * LONE_SWITCH

	//1x4 array of switches, oriented horizontally
	//Button const * SWITCH_1,
	Button * const SWITCH_2;
	Button * const INTAKE_ZERO_PID;
	Button * const INTAKE_DOUBLE;

	//3x3 array of small green buttons
	//Buttons variable names are incremented
	//horizontally, wrapping from right to left
	//Button * const BUTTON_1;
	Button * const BUTTON_2;
	Button * const BUTTON_3;
	Button * const BUTTON_4;
	Button * const BUTTON_5;
	Button * const BUTTON_6;
	Button * const BUTTON_7;
	Button * const BUTTON_8;
	Button * const BUTTON_9;

	//1x3 array of small green buttons
	//Button * const COLUMN_1;
	//Button * const COLUMN_2;
	//Button * const COLUMN_3;

	//Large green buttons,
	//Variable names incremented horizontally
	Button * const LARGE_GREEN_1;
	Button * const LARGE_GREEN_2;

	//Large red button
	//Button * const RED;
};
