#ifndef HammerChime_H
#define HammerChime_H

#include "Commands/Subsystem.h"
#include "WPILib.h"
#include "PinEnums.h"

class HammerChime: public Subsystem
{
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	Victor chimeMotor;
public:
	HammerChime(MotorPin chimeMotorPin);
	void InitDefaultCommand();
	void SetSpeed(double power);
};

#endif
