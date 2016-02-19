#pragma once

#include <WPILib.h>

#ifdef Debug
#define UNKNOWN 64
#else
#define UNKNOWN @port_not_assigned
#endif

namespace Ports {
	namespace CANBusIDs {
		const uint32_t LEFT_DRIVE_MOTOR_1 = 39,
					   LEFT_DRIVE_MOTOR_2 = 41,
					   LEFT_DRIVE_MOTOR_3 = 42,
					   RIGHT_DRIVE_MOTOR_1 = 40,
					   RIGHT_DRIVE_MOTOR_2 = 45,
					   RIGHT_DRIVE_MOTOR_3 = 46,

					   INTAKE_ROLLER = 44,
					   INTAKE_ARM_1 = 43,
					   INTAKE_ARM_2 = 38;
	}
	namespace Launchpad {
		const uint32_t INTAKE_FORWARD = 3,
		               INTAKE_BACKWARD = 1,
					   INTAKE_STOP = 2;
	}
}
