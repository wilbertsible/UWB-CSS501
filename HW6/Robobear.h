/*
 * CSS501 HW #6: Polymorphism
 * Wilbert Lim Sible
 * wsible@uw.edu
 * 2018/11/18 - fall quarter
 *
 * This is the Robobear class that inherits from the robot and the bear classes. 
 *
 *
 */
#include <iostream>
#include "creature.h"
#include "robot.h"
#include "bear.h"

class Robobear:public Robot, public Bear
{
private:
	int percentBear;
	int percentRobot;
public:
	Robobear(int, int, int, string);
	Robobear();
	void setPercentBear(int);
	int getPercentBear();
	void sound() override;

};

