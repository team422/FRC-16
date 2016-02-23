#pragma once

#include <WPILib.h>

class Zero_Intake_PID : public Command {
public:
	Zero_Intake_PID();
	void Initialize();
	void Execute() {};
	bool IsFinished();
	void End() {};
	void Interrupted() {};

};
