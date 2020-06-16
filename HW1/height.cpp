/*
 * CSS501 HW1
 * Wilbert Lim Sible
 * wsible@uw.edu
 * 2018/10/07 - Fall Quarter
 *
 * This is the implementation file for the height program. All of the functions are found in this program. Constructors, getters and setters, 
 * overloaded operators, and destructors are found in this program.
 */


#include <iostream>
using namespace std;
#include "height.h"

Height::Height(int ft, int in) : feet(ft),inches(in) // Constructor with two parameters
{}
Height::Height() : feet(0), inches(0) // Constructor with default parameters set to 0'0"
{}
int Height::getFeet() const // Getter function for the feet part of the height 
{ 
	return feet; 
}
int Height::getInches() const // Getter function for the inches part of the height
{
	return inches;
} 
void Height::setFeet(int ft) // Setter function for the feet part of the height 
{
	feet = ft;
}
void Height::setInches(int in) // Setter function for the inches part of the height
{
	inches = in;
}
void Height::input() // Function that requests for the user's input
{
	cout << "Enter your height (ft): " << endl;
	cin >> feet;
	while (feet < 0) // Invariant that sets the feet to positive numbers
	{
		cout << "Input invalid. Enter your height(ft) : " << endl;
		cin >> feet;

	}
	cout << "Enter your height (in): " << endl;
	cin >> inches;
	while (inches < 0) // Invariant that sets the inches to positive numbers
	{
		cout << "Input invalid. Enter your height(in) :  " << endl;
		cin >> inches;
	}
	if (inches > 12) // Invariant that carries over the inches if it is greater than 12
	{
		feet += (inches / 12);
		inches = inches % 12;
	}
}
void Height::output() const // Gives the output of the height in ' and " format
{
	cout << feet << "\'" << inches << "\"";
}
const Height operator +(const Height& height1, const Height& height2) // Operator that overloads the + operator
{
	int heightInFeet = height1.getFeet() + height2.getFeet(); // adds the height in feet
	int heightInInches = height1.getInches() + height2.getInches(); // adds the height in inches
	if (heightInInches > 12) // If the height in inches is greater than 12, this carries it over to the feet
	{
			heightInFeet += (heightInInches / 12);
			heightInInches = heightInInches % 12;
	}
	return Height(heightInFeet, heightInInches); // Returns the values of the Height in feet and inches
}
const Height operator +=(Height& height1, Height& height2) //  Overloads the operator += 
{
	int heightInFeet = height1.getFeet() + height2.getFeet(); // adds the height in feet
	int heightInInches = height1.getInches() + height2.getInches(); // adds the height in inches
	if (heightInInches > 12) // If the height in inches is greater than 12, this carries it over to the feet
	{
		heightInFeet += (heightInInches / 12);
		heightInInches = heightInInches % 12;
	}
	height1.setFeet(heightInFeet); // sets height1 feet to the variable heightInFeet
	height1.setInches(heightInInches); // Sets the height1 inches to the variable heightInInches
	return height1; // returns height1 with the updated value
}
bool operator ==(const Height& height1, const Height& height2) // Overloads the == operator to check if the two values are equal
{
	return ((height1.getFeet() == height2.getFeet() && height1.getInches() == height2.getInches())); // Compares height1 and height 2 in feet and inches respectively
}
Height::~Height() // Destructor function
{
	cout << "Destructor called!" << endl; // Prompt to show that the destructor was used to deallocate memory
}