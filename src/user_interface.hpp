#ifndef USER_INTERFACE_HPP
#define USER_INTERFACE_HPP

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
		extern JoystickButton *intake_1,
		                      *intake_2,
							  *intake_3;
	}
	void initialize();
}

#endif // USER_INTERFACE_HPP
