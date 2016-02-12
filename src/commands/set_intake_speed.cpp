#include "set_intake_speed.hpp"
#include "../subsystems/subsystems.hpp"
#include "../user_interface.hpp"
#include <WPILib.h>

bool cannot_continue = false;

Set_Intake_Speed::Set_Intake_Speed(float speed) :
speed(speed) {
        Requires(Subsystems::intake);
}

Set_Intake_Speed::Initialize() {
        if(Subsystems::intake->get_is_moving()) {
                cannot_continue = true;
        }
}

void Set_Intake_Speed::Execute() {
        if(!cannot_continue) {
        	Subsystems::intake->set_is_moving(true);
        	Subsystems::intake->set_roller_normalized(speed);
        }
}

bool Set_Intake_Speed::IsFinished() {
	return cannot_continue;
}

void Set_Intake_Speed::Interrupted() {
	Subsystems::intake->set_is_moving(false);
}
