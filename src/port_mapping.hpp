#pragma once

#include <WPILib.h>

// Uncomment for the test bot, comment for competition
#define Mark1

// Uncomment to turn off PID
#define PID

namespace Ports {

	// Logical IDs for the various devices along the CAN chain
	namespace CANBusIDs {
#ifdef Mark1
		const uint32_t LEFT_DRIVE_MOTOR_1 = 39,
					   LEFT_DRIVE_MOTOR_2 = 41,
					   LEFT_DRIVE_MOTOR_3 = 42,
					   RIGHT_DRIVE_MOTOR_1 = 40,
					   RIGHT_DRIVE_MOTOR_2 = 45,
					   RIGHT_DRIVE_MOTOR_3 = 46,

					   INTAKE_ROLLER = 44,
					   INTAKE_ARM_1 = 43,
					   INTAKE_ARM_2 = 38;
#else // Mark2
		const uint32_t LEFT_DRIVE_MOTOR_1 = 60,
					   LEFT_DRIVE_MOTOR_2 = 61,
					   LEFT_DRIVE_MOTOR_3 = 62,
					   RIGHT_DRIVE_MOTOR_1 = 57,
					   RIGHT_DRIVE_MOTOR_2 = 58,
					   RIGHT_DRIVE_MOTOR_3 = 59,

					   INTAKE_ROLLER = 54,
					   INTAKE_ARM_1 = 55,
					   INTAKE_ARM_2 = 56;
#endif
	}

	// Known buttons on the launchpad; phase out
	namespace Launchpad {
		const uint32_t INTAKE_FORWARD = 3,
		               INTAKE_BACKWARD = 1,
					   INTAKE_STOP = 2,
					   INTAKE_ZERO_PID = 2;
	}

	// Ports for controlling pneumatics
	namespace Solenoids {
		const uint32_t INTAKE_PUNCH_OUT = 1,
		               INTAKE_PUNCH_IN = 0;
	}
}
