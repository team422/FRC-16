#include "user_interface.hpp"
#include "port_mapping.hpp"
#include "commands/set_intake_speed.hpp"
#include "commands/fire.hpp"
#include "commands/zero_intake_pid.hpp"
#include <WPILib.h>

Joystick *UI::Primary_Driver::left_stick = 0,
         *UI::Primary_Driver::right_stick = 0;

Joystick *UI::Secondary_Driver::launchpad = 0;
JoystickButton *UI::Secondary_Driver::intake_double = 0,
			   *UI::Secondary_Driver::intake_zero_pid;

Xbox_Controller *UI::Secondary_Driver::controller = 0;

float intake_speed = 0.5;

void UI::initialize() {
	Primary_Driver::left_stick = new Joystick(1);
	Primary_Driver::right_stick = new Joystick(2);

	Secondary_Driver::launchpad = new Joystick(0);
	Secondary_Driver::controller = new Xbox_Controller(3);

	Secondary_Driver::intake_double = new JoystickButton(Secondary_Driver::launchpad, 8);
	Secondary_Driver::intake_zero_pid = new JoystickButton(Secondary_Driver::launchpad, 12);

	Secondary_Driver::controller->B->WhileHeld( new Set_Intake_Speed(intake_speed) );
	Secondary_Driver::controller->A->WhileHeld( new Set_Intake_Speed(-intake_speed) );
	Secondary_Driver::controller->RIGHT_BUMPER->WhenPressed( new Fire() );
	Secondary_Driver::intake_zero_pid->WhenPressed( new Zero_Intake_PID() );
}
