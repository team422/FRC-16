#ifndef SET_INTAKE_SPEED_HPP
#define SET_INTAKE_SPEED_HPP

#include <WPILib.h>

class Set_Intake_Speed : public Command {
public:
	Set_Intake_Speed(float speed);
	void Initialize();
	void Execute() {};
	bool IsFinished();
	void End() {};
	void Interrupted();

private:
	float speed;

};

#endif // SET_INTAKE_SPEED_HPP
