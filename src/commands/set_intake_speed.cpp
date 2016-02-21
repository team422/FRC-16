#include "set_intake_speed.hpp"
#include "../subsystems/subsystems.hpp"
#include <WPILib.h>

Set_Intake_Speed::Set_Intake_Speed(float speed) :
speed(speed) {
	Requires(Subsystems::intake);
}

void Set_Intake_Speed::Initialize() {
	Subsystems::intake->set_roller_normalized(speed);
}

void Set_Intake_Speed::Execute() {
	Subsystems::intake->set_roller_normalized(speed);
}

bool Set_Intake_Speed::IsFinished() {
	return false;
}

void Set_Intake_Speed::Interrupted() {
	Subsystems::intake->set_roller_normalized(0);
}
