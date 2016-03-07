#include "set_intake_pos.hpp"
#include "../user_interface.hpp"
#include "../subsystems/subsystems.hpp"
#include <WPILib.h>

Set_Intake_Pos::Set_Intake_Pos() {
	Requires(Subsystems::intake);
}

void Set_Intake_Pos::Execute() {
	float multiplier = 0.5;
	if (UI::Secondary_Driver::intake_double->Get()) {
		multiplier = 1.0;
	}
	float stick = UI::Secondary_Driver::controller->get_left_y();
	Subsystems::intake->set_arm_normalized(fabs(stick) * 250);
	//Subsystems::intake->set_arm_normalized(stick * fabs(stick) * multiplier);
}

bool Set_Intake_Pos::IsFinished() {
	return false;
}
