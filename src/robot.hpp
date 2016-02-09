#ifndef ROBOT_HPP
#define ROBOT_HPP

#include <WPILib.h>

class Robot : public IterativeRobot {
private:
		void RobotInit();
		void TeleopInit() {};
		void TeleopPeriodic();

};

#endif //ROBOT_HPP
