#include "drive_base.hpp"
#include "../commands/tank_drive.hpp"
#include "../port_mapping.hpp"
#include <WPILib.h>

Drive_Base::Drive_Base():
Subsystem("Drive Base"),
left_motor_1  ( new CANTalon(Ports::CANBusIDs::LEFT_DRIVE_MOTOR_1) ),
left_motor_2  ( new CANTalon(Ports::CANBusIDs::LEFT_DRIVE_MOTOR_2) ),
left_motor_3  ( new CANTalon(Ports::CANBusIDs::LEFT_DRIVE_MOTOR_3) ),
right_motor_1 ( new CANTalon(Ports::CANBusIDs::RIGHT_DRIVE_MOTOR_1) ),
right_motor_2 ( new CANTalon(Ports::CANBusIDs::RIGHT_DRIVE_MOTOR_2) ),
right_motor_3 ( new CANTalon(Ports::CANBusIDs::RIGHT_DRIVE_MOTOR_3) ) {
	left_motor_1->Set(0.0);
	left_motor_2->Set(0.0);
	left_motor_3->Set(0.0);
	right_motor_1->Set(0.0);
	right_motor_2->Set(0.0);
	right_motor_3->Set(0.0);
}
void Drive_Base::set_motors_normalized(float left_stick, float right_stick) {
	left_motor_1->Set(left_stick);
	left_motor_2->Set(left_stick);
	left_motor_3->Set(left_stick);
	right_motor_1->Set(right_stick);
	right_motor_2->Set(right_stick);
	right_motor_3->Set(right_stick);
}
void Drive_Base::InitDefaultCommand() {
	SetDefaultCommand( new Tank_Drive() );
}
