#ifndef TOGGLE_INTAKE_POS_HPP
#define TOGGLE_INTAKE_POS_HPP

#include <WPILib.h>

class Toggle_Intake_Pos : public Command {
public:
	Toggle_Intake_Pos();
	void Initialize() {};
	void Execute();
	bool IsFinished();
	void End() {};
	void Interrupted() {};
};

#endif //TOGGLE_INTAKE_POS_HPP
