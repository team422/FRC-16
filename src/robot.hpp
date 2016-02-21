#pragma once

#include <WPILib.h>

class Robot : public IterativeRobot {
private:
		void RobotInit();
		void TeleopInit() {};
		void TeleopPeriodic();
		CameraServer *camera_server;
};
