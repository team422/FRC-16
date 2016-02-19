#pragma once

#include <WPILib.h>

class Robot : public IterativeRobot {
private:
	CameraServer *camera;

	void RobotInit();
	void TeleopInit() {};
	void TeleopPeriodic();
};
