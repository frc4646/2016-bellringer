#include "DropDrive.h"
#include "../RobotMap.h"
#include "../OI.h"

DropDrive::DropDrive(MotorPin left, MotorPin right) :
		Subsystem("DropDrive"),
		leftMotors(left),
		rightMotors(right),
		DriveTrain(leftMotors, rightMotors)
{
	leftMotors.SetInverted(false);
	rightMotors.SetInverted(false);
}

void DropDrive::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}

void DropDrive::Stop()
{
	leftMotors.SetSpeed(0);
	rightMotors.SetSpeed(0);
}

void DropDrive::HandleDrive(Joystick& left, Joystick& right)
{
	DriveTrain.TankDrive(left.GetRawAxis(1)*-1, right.GetRawAxis(1)*-1);
}


// Put methods for controlling this subsystem
// here. Call these from Commands.
