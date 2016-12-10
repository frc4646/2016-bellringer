#ifndef Ring_H
#define Ring_H

#include "../CommandBase.h"
#include "WPILib.h"

class Ring: public CommandBase
{
private:
	double Speed;
public:
	Ring(double speed);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
