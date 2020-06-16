/*
 * CSS501 HW #2: Searching and Sorting
 * Wilbert Lim Sible
 * wsible@uw.edu
 * 2018/10/14 - fall quarter
 *
 * Node class that defines the node functions in node.h. The functions in this class are used to define the nodes used for the linked list.
 * 
 *
 */

#include <iostream>
#include <string>
#include "node.h"
#include "student.h"
using namespace std;


Node::Node(Student* obj) // Node that takes a Student object pointer parameter
{
	student = obj; //sets the student pointer to obj parameter
	prev = NULL; // sets the previous node pointer to null
	next = NULL; // sets the next node pointer to null
}

Node* Node::getNext() // gets the pointer to the next node
{ 
	return next; 
}

Node* Node::getPrevious() // gets the pointer to the previous node
{ 
	return prev; 
}

int Node::getStudentID() // returns the student's id number
{ 
	return student->getID(); 
}

string Node::getStudentName()  // returns the student's id name
{ 
	return student->getName(); 
}

void Node::setNext(Node *nextNode) // sets the next node to a node parameter
{ 
	next = nextNode; 
}

void Node::setPrevious(Node *previousNode)  // sets the previous node to a node parameter
{ 
	prev = previousNode; 
}

Node::~Node()  //destructor
{
}
