/*
 * CSS501 HW #6: Polymorphism
 * Wilbert Lim Sible
 * wsible@uw.edu
 * 2018/11/18 - fall quarter
 *
 *This is the Robot class that inherits from the creature classes.
 *
 *
 */

#include "robot.h"
#include "creature.h"


Robot::Robot(int dangerLevel, int ver)
{
	setOrganicComp(false);
	setDangerLevel(dangerLevel);
	setVersion(ver);
	
}
Robot::Robot()
{
	setVersion(1);
}

void Robot::sound() 
{
	cout << "~~Bzzztttt~~" << endl;
}
int Robot::getVersion()
{
	return version;
}
void Robot::setVersion(int newVer)
{
	
	if (newVer > 0)
	{
		version = newVer;
	}
	else
	{
		cout << "Cannot set to new version. Reverting back to v.1.0." << endl;
		version = 1;
	}
}

