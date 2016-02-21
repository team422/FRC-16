#pragma once

#include <WPILib.h>

class Set_Intake_Punch : public Command {
public:
	Set_Intake_Punch(DoubleSolenoid::Value position);
	void Initialize();
	void Execute() {};
	bool IsFinished();
	void End() {};
	void Interrupted() {};

private:
	DoubleSolenoid::Value position;
};
