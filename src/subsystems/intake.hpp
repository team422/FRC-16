#pragma once

#include <WPILib.h>

class Intake : public Subsystem {
public:
	Intake();
	void InitDefaultCommand();
	void set_arm_normalized(float speed);
	void zero_pid();
	float get_pid_pos();

private:
	CANTalon *arm_1,
			 *arm_2;

	void SetupTalonForPID(CANTalon *talon);
};
