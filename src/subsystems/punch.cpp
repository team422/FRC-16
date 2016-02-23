#include "punch.hpp"
#include "../port_mapping.hpp"
#include <WPILib.h>

Punch::Punch() :
Subsystem("Punch"),
punch( new DoubleSolenoid(Ports::Solenoids::INTAKE_PUNCH_OUT,
		                  Ports::Solenoids::INTAKE_PUNCH_IN) ) {
	punch->Set(DoubleSolenoid::kReverse);
}

void Punch::set_punch(DoubleSolenoid::Value value) {
	punch->Set(value);
}
