/*
 * CSS501 HW1
 * Wilbert Lim Sible
 * wsible@uw.edu
 * 2018/10/07 - Fall Quarter
 *
 * This is the driver program for the calculation of the user's height in feet and inches. The overloaded operators +, += and ==
 * were used in this driver program. The user's height was added to the programmer's height, which is 5'10". Also, the program checks
 * whether the user and the programmer have the same height. Lastly, the user's height was multiplied by a certain factor.  
 */

#include <iostream> 
using namespace std;
#include "height.h" // Header file

int main()
{
	Height yourHeight, myHeight(5, 10); // Initialization and declatation of Height objects
	yourHeight.input(); // Requests for the user's height in feet
	cout << "Your height is "; 
	yourHeight.output(); // Shows the user's height
	cout << endl;
	cout << "My height is ";
	myHeight.output(); // Shows the programmer's height
	cout << endl;
	cout << "Toghether, we are ";
	Height ourHeight = yourHeight + myHeight; // Uses the overloaded operator + to calculate for the combined height of the user and the programmer
	ourHeight.output(); // Outputs the combined height
	cout << "tall!" << endl;
	if (yourHeight == myHeight) // If statement that compares the height of the user and the programmer using the overloaded operator ==
	{
		cout << "We have the same height!" << endl;
	}
	else
	{
		cout << "We don't have the same height." << endl;
	}
	int number; // Initializes a variable named number
	cout << "Give a number: " << endl; // Prompt
	cin >> number; // Requests for a user input 
	Height timesHeight; // Initializes the timesHeight variable 
	for (int i = 1; i <= number; i++) // Uses the number variable as the condition for the loop
	{
		timesHeight += yourHeight; // Uses the Overloaded operator += to add to the timesHeight variable
	} // For every for loop, the destructor is called.
	cout << "Your height times " << number << " is ";
	timesHeight.output(); // Outputs the timesHeight variable
	cout << endl;
	system("pause");
}