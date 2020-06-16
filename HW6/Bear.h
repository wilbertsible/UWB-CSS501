/*
 * CSS501 HW #6: Polymorphism
 * Wilbert Lim Sible
 * wsible@uw.edu
 * 2018/11/18 - fall quarter
 *
 * This is the Bear class that inherits from the creature classes.
 *
 */
#include <iostream>
#include <string>
#include "creature.h"
#include "robot.h"
#ifndef BEAR_H
#define BEAR_H
using namespace std;
class Bear:virtual public Creature
{
private:
	string color;
public:
	Bear(int, string);
	Bear();
	void sound() override;
	void sound(Robot &newRobot);
	void setColor(string newColor);
	string getColor();

};

#endif