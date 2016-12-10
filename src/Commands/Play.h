#ifndef Play_H
#define Play_H

#include "../CommandBase.h"
#include "WPILib.h"

class Play: public CommandBase
{
private:
	double Speed;
public:
	Play(double speed);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
