#include "Ringer.h"
#include "../RobotMap.h"

Ringer::Ringer(MotorPin ringerMotorPort) :
		Subsystem("ExampleSubsystem"),
		ringerMotor(ringerMotorPort)
{

}

void Ringer::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
void Ringer::SetSpeed(double power)
{
		ringerMotor.Set(power);
}
