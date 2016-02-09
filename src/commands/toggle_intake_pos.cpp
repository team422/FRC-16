#include <commands/toggle_intake_pos.hpp>
#include "../user_interface.hpp"
#include "../subsystems/subsystems.hpp"

#include <WPILib.h>

Toggle_Intake_Pos::Toggle_Intake_Pos() {
	Requires(Subsystems::intake);
}

void Toggle_Intake_Pos::Execute() {
	float stick = UI::Secondary_Driver::controller->get_left_y();
	Subsystems::intake->set_arm_normalized(stick * fabs(stick) * 0.5);
}

bool Toggle_Intake_Pos::IsFinished() {
	return false;
}
