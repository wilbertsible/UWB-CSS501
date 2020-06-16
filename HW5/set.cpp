/*
 * CSS501 HW #5: Set Data Structure
 * Wilbert Lim Sible
 * wsible@uw.edu
 * 2018/11/04 - fall quarter
 *
 * This is implementation file for the set class. This has constructor, the add and get function and the displayRank
 *
 */

#include <iostream>
#include <string>
#include <map>
#include "set.h"
#include "monster.h"
using namespace std;
map<string , int> hashMap; // a map STL was used

Set::Set(Monster item) // Constructor
{
	this->name = item.name;
	hashMap[name] = 1;
}

void Set::add(Monster item)
{
	bool increment = false; // Switch
	map<string, int>::iterator it; // Iterator
	for (auto it = hashMap.begin(); it != hashMap.end(); ++it) // For loop using the iterator
	{
		if (it->first == item.name) // If the monster exists in the database
		{
			int temp = hashMap[item.name]; //Set a temp variable
			temp++; // Increment the temp variable
			hashMap[item.name] = temp; // Set the new value to temp
			increment = true; // make increment true for the for loop
		}
		
	}
	if (increment == false) { // If  monster is not in the database
		hashMap[item.name] = 1; // Create a new entry into database
	}
	increment = false; // Reset switch
} 
int Set::get(Monster item)
{
	return hashMap[item.name]; // Return value from key pair
}

void Set::displayRank()
{
	//Sets up variables
	string top; 
	string second;
	string third;
	map<string, int>::iterator it; // Iterator
	for (auto it = hashMap.begin(); it != hashMap.end(); ++it) // For loop that traverses through
	{
		if (hashMap[it->first] > hashMap[top]) //If number greater than top
		{
			third = second;
			second = top;
			top = it->first;
		}
		else if (hashMap[it->first] <= hashMap[top] && hashMap[it->first] > hashMap[second]) // If number is between top and second
		{
			third = second;
			second = it->first;
		}
		else if (hashMap[it->first] <= hashMap[second] && hashMap[it->first] > hashMap[third]) // If number is between second and third
		{
			third = it->first;
		}
	}
	// Output
	cout << "1. " << top << endl;
	cout << "2. " << second << endl;
	cout << "3. " << third << endl;
}

void Set::printSet()
{
	map<string, int>::iterator it; // Iterator
	for (auto it = hashMap.begin(); it != hashMap.end(); ++it) // For loop that traverses through
	{
		cout << it->first << " " << hashMap[it->first] << endl;
	}
}