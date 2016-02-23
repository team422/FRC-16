#pragma once

#include "drive_base.hpp"
#include "intake.hpp"
#include "punch.hpp"
#include "roller.hpp"

namespace Subsystems {
	extern Drive_Base * drive_base;
	extern Intake * intake;
	extern Punch * punch;
	extern Roller * roller;
	void initialize();
}
