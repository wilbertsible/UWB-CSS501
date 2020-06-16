/*
 * CSS501 HW #6: Polymorphism
 * Wilbert Lim Sible
 * wsible@uw.edu
 * 2018/11/18 - fall quarter
 *
 * This is the parent Creature class.
 *
 *
 *
 */

#include <iostream>
#include <string>
#include "creature.h"

using namespace std;



Creature::Creature(bool comp, int level)
{
	setOrganicComp(comp);
	setDangerLevel(level);
}
Creature::Creature()
{
	setOrganicComp(false);
	setDangerLevel(5);
}
bool Creature::isLevelValid(int level) 
{
	if (level >= 1 && level <= 5)
	{
		return true;
	}
	else
	{
		return false;
	}
}
void Creature::setDangerLevel(int level)
{
	if (isLevelValid(level))
	{
		dangerLevel = level;
	}
	else
	{
		cout << "Cannot set danger level. Setting on high alert!!!." << endl;
		dangerLevel = dangerLevel;
	}
}
bool Creature::getOrganicComp()
{
	return isOrganic;
}
void Creature::setOrganicComp(bool comp)
{
	isOrganic = comp;
}
int Creature::getDangerLevel()
{
	return dangerLevel;
}

