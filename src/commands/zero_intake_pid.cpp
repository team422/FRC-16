#include "zero_intake_pid.hpp"
#include "../subsystems/subsystems.hpp"
#include <WPILib.h>

Zero_Intake_PID::Zero_Intake_PID() {
	Requires(Subsystems::intake);
}

void Zero_Intake_PID::Initialize() {
	Subsystems::intake->zero_pid();
}

bool Zero_Intake_PID::IsFinished() {
	return true;
}
