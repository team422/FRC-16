#pragma once

#include "port_mapping.hpp"
#include "xbox_controller.hpp"
#include <WPILib.h>

namespace UI {
	namespace Primary_Driver {
		extern Joystick *left_stick,
		                *right_stick;
	}
	namespace Secondary_Driver {
		extern Joystick *launchpad;
		extern Xbox_Controller *controller;
		extern JoystickButton *intake_double,
							  *intake_zero_pid;
	}
	void initialize();
}
