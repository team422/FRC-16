#pragma once

#include <WPILib.h>

class Drive_Base : public Subsystem {
public:
	Drive_Base();
	void InitDefaultCommand();
	void set_motors_normalized(float left_stick, float right_stick);
private:
	CANTalon *left_motor_1,
			 *left_motor_2,
			 *left_motor_3,
			 *right_motor_1,
			 *right_motor_2,
			 *right_motor_3;
};
