#include <iostream>
#include "bear.h"
#include "creature.h"
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

using namespace std;


Bear::Bear(int dangerLevel, string color)
{
	setOrganicComp(true);
	setColor(color);
	setDangerLevel(dangerLevel);
}
Bear::Bear()
{
	setColor("brown");
}

void Bear::setColor(string newColor)
{
	color = newColor;
}
void Bear::sound()
{
	cout << "Rawrrrr" << endl;
}
void Bear::sound(Robot &newRobot)
{
	cout << "Rawrrrr" << endl;
	newRobot.version++;
}

string Bear::getColor()
{
	return color;
}
