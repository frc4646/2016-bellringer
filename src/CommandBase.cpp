#include "CommandBase.h"
#include "Subsystems/ExampleSubsystem.h"
#include "Subsystems/DropDrive.h"
#include "Subsystems/Ringer.h"
#include "Subsystems/HammerChime.h"
#include "Commands/Scheduler.h"

// Initialize a single static instance of all of your subsystems to NULL
std::unique_ptr<ExampleSubsystem> CommandBase::examplesubsystem;
std::unique_ptr<OI> CommandBase::oi;
DropDrive* CommandBase::dropdrive = NULL;
Ringer* CommandBase::ringer = NULL;
HammerChime* CommandBase::hammerchime = NULL;

CommandBase::CommandBase(const std::string &name) :
		Command(name)
{

}

CommandBase::CommandBase() :
		Command()
{

}

void CommandBase::init()
{
	// Create a single static instance of all of your subsystems. The following
	// line should be repeated for each subsystem in the project.
	examplesubsystem.reset(new ExampleSubsystem());
	oi.reset(new OI());
	dropdrive = new DropDrive(M9, M1);
	ringer = new Ringer(M8);
	hammerchime = new HammerChime(M2);
}
