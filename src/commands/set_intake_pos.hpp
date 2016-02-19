#pragma once

#include <WPILib.h>

class Set_Intake_Pos : public Command {
public:
	Set_Intake_Pos();
	void Initialize() {};
	void Execute();
	bool IsFinished();
	void End() {};
	void Interrupted() {};
};
