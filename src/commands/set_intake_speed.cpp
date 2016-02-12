#include "set_intake_speed.hpp"
#include "../subsystems/subsystems.hpp"
#include "../user_interface.hpp"
#include <WPILib.h>

Set_Intake_Speed::Set_Intake_Speed(float speed) :
speed(speed) {
	Requires(Subsystems::intake);
}

//Checks the current move direction of the roller motor, and prevents motor conflicts
//Since Commands aren't multithreaded, synchronization shouldn't be an issue
void Set_Intake_Speed::Execute() {
	if(speed < 0) {
		Subsystems::intake->move_direction = -1;
		if(Subsystems::intake->move_direction = 1) { } else {
			Subsystems::intake->set_roller_normalized(speed);
		}
	} else if(speed > 0) {
		Subsystems::intake->move_direction = 1;
		if(Subsystems::intake->move_direction = -1) { } else {
			Subsystems::intake->set_roller_normalized(speed);
		}
	}
}

bool Set_Intake_Speed::IsFinished() {
	return false;
}

void Set_Intake_Speed::Interrupted() {
	Subsystems::intake->move_direction = 0; //Reset move direction to unmoving
}
