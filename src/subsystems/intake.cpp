#include <commands/toggle_intake_pos.hpp>
#include "intake.hpp"
#include "../port_mapping.hpp"
#include <WPILib.h>

Intake::Intake() :
Subsystem("Intake"),
roller( new CANTalon(Ports::CANBusIDs::INTAKE_ROLLER) ),
arm_1( new CANTalon(Ports::CANBusIDs::INTAKE_ARM_1) ),
arm_2( new CANTalon(Ports::CANBusIDs::INTAKE_ARM_2) ) {
}

void Intake::set_roller_normalized(float speed) {
	roller->Set(speed);
}

void Intake::set_arm_normalized(float speed) {
	arm_1->Set(speed);
	arm_2->Set(-speed);
}

void Intake::InitDefaultCommand() {
	SetDefaultCommand( new Toggle_Intake_Pos() );
}
