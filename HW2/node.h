/*
 * CSS501 HW #2: Searching and Sorting
 * Wilbert Lim Sible
 * wsible@uw.edu
 * 2018/10/14 - fall quarter
 *
 * This is the Node class interface whcih creates the nodes for the linked list. It takes a pointer to a Student object
 * and pointers to the previous and next nodes. The header also has the getter and setter methods, constructor, and destructor.
 *
 */

#ifndef NODE_H 
#define NODE_H
#include "student.h"

class Node
{
private:
	Student *student; // Student pointer to a student object
	Node *prev; // Node pointer to the previous node
	Node *next; // Node pointer to the next node
public:
	
	Node(Student *); // Constructor
	Node *getNext(); // getter function that gets the pointer to next node 
	Node *getPrevious(); // getter function that gets the pointer to previous node 
	int getStudentID(); // getter function that returns the student's id
	string getStudentName(); // getter function that returns the student's name
	void setNext(Node *); // sets the next node with a node pointer parameter
	void setPrevious(Node *); // sets the previous node to a  node pointer parameter
	~Node(); // destructor
};

#endif

