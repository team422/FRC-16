#include "set_intake_punch.hpp"
#include "../subsystems/subsystems.hpp"
#include <WPILib.h>

Set_Intake_Punch::Set_Intake_Punch(DoubleSolenoid::Value position) :
position( position ) {
	Requires(Subsystems::intake);
}

void Set_Intake_Punch::Initialize() {
	Subsystems::intake->set_punch(position);
}

bool Set_Intake_Punch::IsFinished() {
	return true;
}
