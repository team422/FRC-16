#ifndef INTAKE_HPP
#define INTAKE_HPP

#include <WPILib.h>

class Intake : public Subsystem {
public:
	Intake();
	void InitDefaultCommand();
	void set_roller_normalized(float speed);
	void set_arm_normalized(float speed);
	
	//Used to determine the current movement of roller, -1 is backwards, 0 is off, 1 is forward
	int move_direction;

private:
	CANTalon *roller,
	         *arm_1,
			 *arm_2;
};

#endif // INTAKE_HPP
