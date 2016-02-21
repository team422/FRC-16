#include "toggle_intake_punch.hpp"
#include "../subsystems/subsystems.hpp"
#include <WPILib.h>

Toggle_Intake_Punch::Toggle_Intake_Punch() {
	Requires(Subsystems::intake);
}

void Toggle_Intake_Punch::Initialize() {
	Subsystems::intake->toggle_punch();
}

bool Toggle_Intake_Punch::IsFinished() {
	return true;
}
