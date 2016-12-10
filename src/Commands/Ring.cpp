#include "Ring.h"
#include "Subsystems/Ringer.h"
#include "OI.h"

Ring::Ring(double speed):
Speed(speed)
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(ringer);
}

// Called just before this Command runs the first time
void Ring::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void Ring::Execute()
{
	ringer->SetSpeed(Speed);
}

// Make this return true when this Command no longer needs to run execute()
bool Ring::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void Ring::End()
{
	ringer->SetSpeed(0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void Ring::Interrupted()
{
	ringer->SetSpeed(0);
}
