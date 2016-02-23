#include "subsystems.hpp"

Drive_Base * Subsystems::drive_base = 0;
Intake * Subsystems::intake = 0;
Punch * Subsystems::punch = 0;

void Subsystems::initialize() {
	drive_base = new Drive_Base();
	intake = new Intake();
	punch = new Punch();
}
