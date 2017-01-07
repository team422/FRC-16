#pragma once

#include <WPILib.h>
#include <CANTalon.h>

class Roller : public Subsystem {
public:
	Roller();
	void set_roller_normalized(float speed);

private:
	CANTalon *roller;
};
