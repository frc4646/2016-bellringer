#include "Play.h"
#include "Subsystems/HammerChime.h"
#include "OI.h"

Play::Play(double speed):
Speed(speed)
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(hammerchime);
}

// Called just before this Command runs the first time
void Play::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void Play::Execute()
{
	hammerchime->SetSpeed(Speed);
}

// Make this return true when this Command no longer needs to run execute()
bool Play::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void Play::End()
{
	hammerchime->SetSpeed(0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void Play::Interrupted()
{
	hammerchime->SetSpeed(0);
}
