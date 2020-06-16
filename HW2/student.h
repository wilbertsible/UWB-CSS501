#ifndef STUDENT_H
/*
 * CSS501 HW #2: Searching and Sorting
 * Wilbert Lim Sible
 * wsible@uw.edu
 * 2018/10/14 - fall quarter
 *
 * This is the header file for the Student class which has studentID and studentName as states and
 * getID and getName as methods.
 *
 */


#define STUDENT_H
#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
	int studentID; // student's ID number
	string studentName; // student's name
public:

	Student(int id, string name); //constructor
	int getID(); // getter function of the ID number 
	string getName(); // getter for the student name 
};
#endif