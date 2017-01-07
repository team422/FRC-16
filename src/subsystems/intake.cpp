#include "../commands/set_intake_pos.hpp"
#include "intake.hpp"
#include "../port_mapping.hpp"
#include <WPILib.h>
#include <CANTalon.h>

Intake::Intake() :
Subsystem("Intake"),
arm_1( new CANTalon(Ports::CANBusIDs::INTAKE_ARM_1) ),
arm_2( new CANTalon(Ports::CANBusIDs::INTAKE_ARM_2) ) {
#ifdef PID
	arm_1->SetControlMode(CANSpeedController::kFollower);
	arm_1->Set(Ports::CANBusIDs::INTAKE_ARM_2);
	//arm_2->SetClosedLoopOutputDirection(true);
	SetupTalonForPID(arm_2);
#endif
}

void Intake::set_arm_normalized(float speed) {
	arm_2->Set(speed);
#ifndef PID
	arm_1->Set(speed);
#endif
}

void Intake::InitDefaultCommand() {
	SetDefaultCommand( new Set_Intake_Pos() );
}

void Intake::zero_pid() {
	arm_2->SetPosition(0);
}

float Intake::get_pid_pos() {
	return arm_2->Get();
}

void Intake::SetupTalonForPID(CANTalon *talon) {
	talon->SetControlMode(CANSpeedController::kPosition);
	talon->SetPID(0.2, 0, 0, 1.6); // 70,0.5,0,0
	talon->ConfigSoftPositionLimits(2750, 0); // former value does nothing
	// Assuming that the arm is always down when starting
	talon->SetPosition(0);
}
