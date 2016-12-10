#ifndef PlaySong_H
#define PlaySong_H

#include "Commands/CommandGroup.h"
#include "WPILib.h"

class PlaySong: public CommandGroup
{
private:
	double Time;
	double Speed;
public:
	PlaySong(double speed,double time);
};

#endif
