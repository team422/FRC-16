#pragma once

#include "drive_base.hpp"
#include "intake.hpp"
#include "punch.hpp"

namespace Subsystems {
	extern Drive_Base * drive_base;
	extern Intake * intake;
	extern Punch * punch;
	void initialize();
}
