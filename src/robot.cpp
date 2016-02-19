#include "robot.hpp"
#include "user_interface.hpp"
#include "subsystems/subsystems.hpp"
#include <WPILib.h>

void Robot::RobotInit() {
	Subsystems::initialize();
	UI::initialize();
	camera = new CameraServer::GetInstance();
	camera->SetQuality(50);
	camera->StartAutomaticCapture("cam0");
	//autonomous = new Autonomous
}
/*
void Robot::AutonomousInit() {
	autonomous->Start();
}

void Robot::TeleopInit() {
	autonomous->Cancel();
}

void Robot::AutonomousPeriodic() {
	Scheduler::GetInstance()->Run();
}
*/
void Robot::TeleopPeriodic() {
	Scheduler::GetInstance()->Run();
}

START_ROBOT_CLASS(Robot)
