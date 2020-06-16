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
#include <iostream>
#include <string>
#include "creature.h"
#ifndef ROBOT_H
#define ROBOT_H
using namespace std;

class Robot:virtual public Creature
{
private:
	int version = 1;
public:
	Robot(int level, int ver);
	Robot();
	void sound() override;
	int getVersion();
	void setVersion(int);
	friend class Bear;
};

#endif