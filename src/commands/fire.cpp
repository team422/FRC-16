#include "set_intake_punch.hpp"
#include "fire.hpp"
#include <WPILib.h>

Fire::Fire() {
	AddSequential( new Set_Intake_Punch(DoubleSolenoid::kForward) );
	AddSequential( new WaitCommand(0.5) );
	AddSequential( new Set_Intake_Punch(DoubleSolenoid::kReverse) );
}
