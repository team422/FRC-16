#include "../commands/set_intake_pos.hpp"
#include "intake.hpp"
#include "../port_mapping.hpp"
#include <WPILib.h>

// Uncomment for PID, leave commented for standard control
#define PID

Intake::Intake() :
Subsystem("Intake"),
roller( new CANTalon(Ports::CANBusIDs::INTAKE_ROLLER) ),
arm_1( new CANTalon(Ports::CANBusIDs::INTAKE_ARM_1) ),
arm_2( new CANTalon(Ports::CANBusIDs::INTAKE_ARM_2) ),
punch( new DoubleSolenoid(Ports::Solenoids::INTAKE_PUNCH_OUT,
		                  Ports::Solenoids::INTAKE_PUNCH_IN) ) {
#ifdef PID
	arm_1->SetControlMode(CANSpeedController::kFollower);
	arm_1->Set(Ports::CANBusIDs::INTAKE_ARM_2);
	arm_2->SetClosedLoopOutputDirection(true);
	SetupTalonForPID(arm_2);
#endif

	punch->Set(DoubleSolenoid::kReverse);
}

void Intake::set_roller_normalized(float speed) {
	roller->Set(speed);
}

void Intake::set_arm_normalized(float speed) {
	arm_2->Set(speed);
#ifndef PID
	arm_1->Set(speed);
#endif
}

void Intake::set_punch(DoubleSolenoid::Value value) {
	punch->Set(value);
}

void Intake::InitDefaultCommand() {
	SetDefaultCommand( new Set_Intake_Pos() );
}

void Intake::SetupTalonForPID(CANTalon *talon) {
	talon->SetClosedLoopOutputDirection(true);
	talon->SetControlMode(CANSpeedController::kPosition);
	talon->SetPID(0.1, 0, 0);
	//talon->ConfigLimitMode(CANSpeedController::kLimitMode_SoftPositionLimits);
	//talon->ConfigForwardLimit(20000);
	//talon->ConfigReverseLimit(0);
	// Assuming that the arm is always down when starting
	talon->SetPosition(0);
}
