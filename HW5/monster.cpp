/*
 * CSS501 HW #5: Set Data Structure
 * Wilbert Lim Sible
 * wsible@uw.edu
 * 2018/11/04 - fall quarter
 *
 * This is the .cpp file for the monster class. The constructor was used to enforce invariance and the == operator was overloaded.
 *
 */

#include<iostream>
#include "monster.h"
using namespace std;

// Constructor
Monster::Monster(string name, double size, int limbs)
{
	this->name = name;
	if (size > 0)
	{
		this->size = size;
	}
	else
	{
		this->size = 1;
	}
	if (limbs >= 0)
	{
		this->limbs = limbs;
	}
	else
	{
		this->limbs = 0;
	}
}

bool Monster::operator== (const Monster &compare) const // Operator overloading
{
	return this->name == compare.name;
}