#include "user_interface.hpp"
#include "port_mapping.hpp"
#include "commands/set_intake_speed.hpp"
#include <WPILib.h>

Joystick *UI::Primary_Driver::left_stick = 0,
         *UI::Primary_Driver::right_stick = 0;

Joystick *UI::Secondary_Driver::launchpad = 0;
Xbox_Controller *UI::Secondary_Driver::controller = 0;
JoystickButton *UI::Secondary_Driver::intake_1 = 0,
               *UI::Secondary_Driver::intake_2 = 0,
		*UI::Secondary_Driver::intake_3 = 0;

float intake_speed = 0.5;

void UI::initialize() {
	Primary_Driver::left_stick = new Joystick(1);
	Primary_Driver::right_stick = new Joystick(2);

	Secondary_Driver::launchpad = new Joystick(0);
	Secondary_Driver::controller = new Xbox_Controller(3);
	
	Secondary_Driver::intake_1 = new JoystickButton(Secondary_Driver::launchpad,
							Ports::Launchpad::INTAKE_FORWARD);
	Secondary_Driver::intake_2 = new JoystickButton(Secondary_Driver::launchpad,
	                                                Ports::Launchpad::INTAKE_BACKWARD);
	Secondary_Driver::intake_3 = new JoystickButton(Secondary_Driver::launchpad,
	                                                Ports::Launchpad::INTAKE_STOP);

	Secondary_Driver::intake_1->WhenPressed( new Set_Intake_Speed(intake_speed) );
	Secondary_Driver::intake_2->WhenPressed( new Set_Intake_Speed(-intake_speed) );
	Secondary_Driver::intake_3->WhenPressed( new Set_Intake_Speed(0) );
}
