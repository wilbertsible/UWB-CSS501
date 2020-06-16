/*
 * CSS501 HW #5: Set Data Structure
 * Wilbert Lim Sible
 * wsible@uw.edu
 * 2018/11/04 - fall quarter
 *
 * This is header file for the monster class that was used to populate the set.
 *
 */
#include <iostream>
using namespace std;
#ifndef MONSTER_H
#define MONSTER_H

class Monster
{
public:
	string name;
	double size;
	int limbs;
	Monster(string name, double size, int limbs); //Constructor
	bool operator==(const Monster &compare)const; // Operator Overload
};
#endif