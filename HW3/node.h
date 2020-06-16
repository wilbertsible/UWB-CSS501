/*
 * CSS501 HW #3: String Reversal
 * Wilbert Lim Sible
 * wsible@uw.edu
 * 2018/10/21 - fall quarter
 *
 * This is the Node class interface whcih creates the nodes for the linked list. It takes a pointer to a string object
 * and pointer to the next nodes. The header also has the getter and setter methods, constructor, and destructor.
 *
 */
#include <iostream>
using namespace std;
#ifndef NODE_H 
#define NODE_H




class Node
{
private:
	string word; // string pointer to a string object
	Node *next; // Node pointer to the next node
public:

	Node(string word); // Constructor
	Node *getNext(); // getter function that gets the pointer to next node 
	string getWord(); // getter function that returns the string
	void setNext(Node *); // sets the next node with a node pointer parameter
	
	~Node(); // destructor
};

#endif

