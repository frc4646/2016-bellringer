#ifndef DropDrive_H
#define DropDrive_H

#include "Commands/Subsystem.h"
#include "WPILib.h"
#include "PinEnums.h"

class DropDrive: public Subsystem
{
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	Victor leftMotors;
	Victor rightMotors;
	RobotDrive DriveTrain;


public:
	DropDrive(MotorPin left, MotorPin right);
	void InitDefaultCommand();
	void Stop();
	void HandleDrive(Joystick& left, Joystick& right);
};

#endif
