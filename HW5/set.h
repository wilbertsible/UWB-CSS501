/*
 * CSS501 HW #5: Set Data Structure
 * Wilbert Lim Sible
 * wsible@uw.edu
 * 2018/11/04 - fall quarter
 *
 * This is header file for the set class.
 *
 */

#include<map>
#include "monster.h"

#ifndef SET_H
#define SET_H


class Set
{
public: 
	string name;
	Set(Monster item);
	void add(Monster item);
	int get(Monster item);
	void displayRank(); 
	void printSet();
};
#endif
