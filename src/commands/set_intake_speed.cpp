#include "set_intake_speed.hpp"
#include "../subsystems/subsystems.hpp"
#include "../user_interface.hpp"
#include <WPILib.h>

Set_Intake_Speed::Set_Intake_Speed(float speed) :
speed(speed) {
	Requires(Subsystems::intake);
}

void Set_Intake_Speed::Initialize() {
	Subsystems::intake->set_roller_normalized(speed);
}

bool Set_Intake_Speed::IsFinished() {
	return false;
}
