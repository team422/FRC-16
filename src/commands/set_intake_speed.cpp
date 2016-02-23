#include "set_intake_speed.hpp"
#include "../subsystems/subsystems.hpp"
#include <WPILib.h>

Set_Intake_Speed::Set_Intake_Speed(float speed) :
speed(speed) {
	Requires(Subsystems::roller);
}

void Set_Intake_Speed::Initialize() {
	Subsystems::roller->set_roller_normalized(speed);}

void Set_Intake_Speed::Execute() {
	Subsystems::roller->set_roller_normalized(speed);
}

bool Set_Intake_Speed::IsFinished() {
	return false;
}

void Set_Intake_Speed::Interrupted() {
	Subsystems::roller->set_roller_normalized(0);
}
