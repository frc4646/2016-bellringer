#include "HammerChime.h"
#include "../RobotMap.h"

HammerChime::HammerChime(MotorPin chimeMotorPin) :
		Subsystem("ExampleSubsystem"),
		chimeMotor(chimeMotorPin)
{

}

void HammerChime::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}

void HammerChime::SetSpeed(double power)
{
		chimeMotor.Set(power);
}
// Put methods for controlling this subsystem
// here. Call these from Commands.
