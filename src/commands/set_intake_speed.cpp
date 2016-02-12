#include "set_intake_speed.hpp"
#include "../subsystems/subsystems.hpp"
#include "../user_interface.hpp"
#include <WPILib.h>

Set_Intake_Speed::Set_Intake_Speed(float speed) :
speed(speed),
should_stop (false) {
	Requires(Subsystems::intake);
}

void Set_Intake_Speed::Initialize() {
	if (Subsystems::intake->get_is_moving()) {
		should_stop = true;
	} else {
		Subsystems::intake->set_is_moving(true);
	}
}

void Set_Intake_Speed::Execute() {
	if (!should_stop) {
		Subsystems::intake->set_roller_normalized(speed);
	}
}

bool Set_Intake_Speed::IsFinished() {
	return should_stop;
}

void Set_Intake_Speed::Interrupted() {
	Subsystems::intake->set_roller_normalized(0);
	Subsystems::intake->set_is_moving(false);
}
