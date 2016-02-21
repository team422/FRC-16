#pragma once

#include <WPILib.h>

class Toggle_Intake_Punch : public Command {
public:
	Toggle_Intake_Punch();
	void Initialize();
	void Execute() {};
	bool IsFinished();
	void End() {};
	void Interrupted() {};
};
