#ifndef SET_INTAKE_POS_HPP
#define SET_INTAKE_POS_HPP

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

#endif //SET_INTAKE_POS_HPP
