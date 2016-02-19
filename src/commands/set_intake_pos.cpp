#include <commands/set_intake_pos.hpp>
#include "../user_interface.hpp"
#include "../subsystems/subsystems.hpp"
#include <WPILib.h>

Set_Intake_Pos::Set_Intake_Pos() {
	Requires(Subsystems::intake);
}

void Set_Intake_Pos::Execute() {
	float stick = UI::Secondary_Driver::controller->get_left_y();
	Subsystems::intake->set_arm_normalized(stick * fabs(stick) * 0.5);
}

bool Set_Intake_Pos::IsFinished() {
	return false;
}
