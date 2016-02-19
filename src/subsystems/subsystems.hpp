#pragma once

#include "drive_base.hpp"
#include "intake.hpp"

namespace Subsystems {
	extern Drive_Base * drive_base;
	extern Intake * intake;
	void initialize();
}
