#include "tank_drive.hpp"
#include "../user_interface.hpp"
#include "../subsystems/subsystems.hpp"
#include <WPILib.h>

float scale_input(float input) {
	return input * fabs(input) * 0.8;
}

Tank_Drive::Tank_Drive() {
	Requires(Subsystems::drive_base);
}

void Tank_Drive::Execute() {
	float right_stick = UI::Primary_Driver::right_stick->GetY();
	float left_stick = UI::Primary_Driver::left_stick->GetY();

	Subsystems::drive_base->set_motors_normalized (
		-scale_input(left_stick),
		scale_input(right_stick)
	);
}

bool Tank_Drive::IsFinished() {
	return false;
}
