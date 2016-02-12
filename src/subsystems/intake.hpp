#ifndef INTAKE_HPP
#define INTAKE_HPP

#include <WPILib.h>

class Intake : public Subsystem {
public:
	Intake();
	void InitDefaultCommand();
	void set_roller_normalized(float speed);
	void set_arm_normalized(float speed);

private:
	CANTalon *roller,
	         *arm_1,
			 *arm_2;
	bool is_moving;
};

#endif // INTAKE_HPP
