#include "roller.hpp"
#include "../port_mapping.hpp"
#include <WPILib.h>

Roller::Roller() :
Subsystem("Roller"),
roller( new CANTalon(Ports::CANBusIDs::INTAKE_ROLLER) ) {
}

void Roller::set_roller_normalized(float speed) {
	roller->Set(speed);
}
