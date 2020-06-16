/*
 * CSS501 HW0
 * Wilbert Lim Sible
 * wsible@uw.edu
 * 2018/09/28 - Fall Quarter
 *
 * This program solves for the value of a given base and exponent. Several concepts such as iostream, cout, cin, for loops, and if/else statements 
 * to calculate for the value.
 *
 * What I would like to see technology do in the futute:
 * I would like to see more discoveries and inventions that will propel humanity forward. I would definetely want to see us go to Mars and colonize the moon.
 * I want humanity to use quantum computing to figure out the deepest mysteries of the universe, like dark matter, and new subatomic particles. 
 * I also want to use computer science to solve daily problems like traffic, poverty, crime, etc. Lastly, I would like to create more individualized apps
 * for people to use to make their lives better. 
 */

#include <iostream> //Standard input, output, stream library
using namespace std; 

int main()
{
	int base, power; //declaration of the integer variables base and power
	double answer = 1.0; // declaration and initialization of double variable answer to 1.0
	cout << "Welcome to the Exponent Calculator.\n"; //Introduction 
	cout << "Please enter the base: "; // Initial prompt
	cin >> base; // Input of initial base variable
	while (base!=0) { // While loop with a Sentinel value to terminate the program
		cout << "Please enter the power: "; // Prompt
		cin >> power; // Input of power variable
		if (power == 0) // If the base is non zero and the power is zero, the answer is undefined
		{
			cout << 1 << endl; // Prints out 1
		}
		else if (power < 0) // If the power is a negative number, this calculation is used.
		{
			for (int i = 0; i > power; i--) // For loop that counts down from zero to the negative number.
			{
				answer *= (1 / (double)base); // double answer is equal to answer times (1/base) with int base variable type casted as a double

			}
			cout << answer << endl; // Prints out the answer
		}
		else // For all the positive non-zero power, this calculation is used
		{

			for (int i = 0; i < power; i++) // For loop that counts from 0  to power
			{
				answer *= base; // answer is equal to answer times the base for every single loop 
			}
			cout << answer << endl; // Prints out the answer
		}
		answer = 1; // Resets the value of answer to 1
		cout << "Please enter the base: "; // Prompts again as a fencepost algorithm
		cin >> base; // Input of the new base variable
	}
	cout << "Thank you for using the Exponent Calculator" << endl;
}

