/*
 * CSS501 HW1
 * Wilbert Lim Sible
 * wsible@uw.edu
 * 2018/10/07 - Fall Quarter
 *
 * This is the header file for the height program. This is the program interface where all of the functions used are enumerated.
 */
#pragma once
#ifndef LENGHT_H 
#define LENGTH_H

#include <iostream>
using namespace std;

class Height 
{
public:
	Height(int ft, int in);

	Height();
	int getFeet() const;
	int getInches() const;
	void setFeet(int ft);
	void setInches(int in);
	void input();
	void output() const;
	~Height();
	

private:
	int feet, inches;

};
const Height operator +(const Height& height1, const Height& height2);
const Height operator +=( Height& height1, Height& height2);
bool operator ==(const Height& height1, const Height& height2);
#endif 