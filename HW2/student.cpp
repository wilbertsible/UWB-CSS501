/*
 * CSS501 HW #2: Searching and Sorting
 * Wilbert Lim Sible
 * wsible@uw.edu
 * 2018/10/14 - fall quarter
 *
 * Student class that defines the constructor and the get functions getID and getName.
 *
 */

#pragma once
#include <iostream>
#include <string>
#include "student.h"
using namespace std;

Student::Student(int id, string name) : studentID(id), studentName(name){} // Constructor that takes student id and student name

int Student::getID() // function that returns the student's ID
{
	return studentID;
}

string Student::getName() //function that retruns the student's name
{
	return studentName;
}
