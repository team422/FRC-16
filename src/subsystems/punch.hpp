#pragma once

#include <WPILib.h>

class Punch : public Subsystem {
public:
	Punch();
	void set_punch(DoubleSolenoid::Value value);

private:
	DoubleSolenoid *punch;
};
