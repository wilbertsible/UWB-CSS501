/*
 * CSS501 HW #6: Polymorphism
 * Wilbert Lim Sible
 * wsible@uw.edu
 * 2018/11/18 - fall quarter
 *
 * This is the Robobear class that inherits from the robot and the bear classes.
 *
 *
 *
 */
#include "Robobear.h"

Robobear::Robobear(int dangerLevel, int bearPart, int version, string color)
{
	setPercentBear(bearPart);
	setVersion(version);
	setColor(color);
	setOrganicComp(true);
	setDangerLevel(dangerLevel);
}
Robobear::Robobear()
{
	percentRobot = 50;
	percentBear = 50;
	setVersion(1);
	setColor("brown");
	setOrganicComp(true);
	setDangerLevel(5);
}
void Robobear::setPercentBear(int bearPart)
{
	if (bearPart <= 100 && bearPart >= 0)
	{
		percentBear = bearPart;
		percentRobot = 100 - bearPart;
	}
	else
	{
		cout << "Cannot set percentage. Set to half and half." << endl;
		percentBear = 50;
	}
}
int Robobear::getPercentBear()
{
	return percentBear;
}

void Robobear::sound()
{
	cout << "Rawrrrr.....Bzzt....Bzzt..." << endl;
}

