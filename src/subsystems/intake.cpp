#include <commands/set_intake_pos.hpp>
#include "intake.hpp"
#include "../port_mapping.hpp"
#include <WPILib.h>

Intake::Intake() :
Subsystem("Intake"),
roller( new CANTalon(Ports::CANBusIDs::INTAKE_ROLLER) ),
arm_1( new CANTalon(Ports::CANBusIDs::INTAKE_ARM_1) ),
arm_2( new CANTalon(Ports::CANBusIDs::INTAKE_ARM_2) ),
punch( new DoubleSolenoid(Ports::Solenoids::INTAKE_PUNCH_OUT,
		                  Ports::Solenoids::INTAKE_PUNCH_IN) ) {
	arm_1->SetControlMode(CANSpeedController::kFollower);
	arm_1->Set(Ports::CANBusIDs::INTAKE_ARM_2);
	arm_2->SetClosedLoopOutputDirection(true);
	arm_2->SetControlMode(CANSpeedController::kPosition);
	arm_2->SetPID(0.1, 0, 0);
	//arm_2->ConfigLimitMode(CANSpeedController::kLimitMode_SoftPositionLimits);
	//arm_2->ConfigForwardLimit(20000);
	//arm_2->ConfigReverseLimit(0);
	// Assuming that the arm is always down when starting
	arm_2->SetPosition(0);

	punch->Set(DoubleSolenoid::kReverse);
}

void Intake::set_roller_normalized(float speed) {
	roller->Set(speed);
}

void Intake::set_arm_normalized(float speed) {
	arm_2->Set(speed);
}

void Intake::toggle_punch() {
	if (punch->Get() == DoubleSolenoid::kReverse) {
		punch->Set(DoubleSolenoid::kForward);
	} else {
		punch->Set(DoubleSolenoid::kReverse);
	}
}

void Intake::InitDefaultCommand() {
	SetDefaultCommand( new Set_Intake_Pos() );
}
