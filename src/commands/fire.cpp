#include "fire.hpp"
#include "toggle_intake_punch.hpp"
#include <WPILib.h>

Fire::Fire() {
	AddSequential( new Toggle_Intake_Punch() );
	AddSequential( new WaitCommand(0.5) );
	AddSequential( new Toggle_Intake_Punch() );
}
