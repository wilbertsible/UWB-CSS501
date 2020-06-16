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
#ifndef CREATURE_H
#define CREATURE_H
using namespace std;
class Creature
{
private:
	bool isOrganic;
	int dangerLevel;
	bool isLevelValid(int);
public:
	Creature(bool, int);
	Creature();
	virtual bool getOrganicComp();
	virtual void setOrganicComp(bool);
	virtual int getDangerLevel();
	virtual void setDangerLevel(int level);
	virtual void sound() = 0;

};
#endif
