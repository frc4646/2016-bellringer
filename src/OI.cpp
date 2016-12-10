#include "OI.h"
#include "Commands/TankDrive.h"
#include "Commands/Ring.h"
#include "Commands/Play.h"
#include "Commands/PlaySong.h"

OI::OI():
left(0),
right(1),
ring(&right, 1),
playsong(&left, 1)
{

	// Process operator interface input here.
	ring.WhileHeld(new Ring(0.5 ));
	playsong.WhenPressed(new PlaySong(0.5,60));
}
Joystick& OI::GetLeftStick() {
	return left;
}
Joystick& OI::GetRightStick() {
	return right;
}
