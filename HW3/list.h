/*
 * CSS501 HW #3: String Reversal
 * Wilbert Lim Sible
 * wsible@uw.edu
 * 2018/10/21 - fall quarter
 *
 * This is the interface of the class list which builds the singly linked list that was used to
 * store the strings. It has the pointer variables head and tail which points to the head and tail
 * of the singly linked list. 
 *
 */

#ifndef LIST_H
#define LIST_H
#include "node.h"
#include <iostream>
using namespace std;


class List
{
private:
	Node *head; // assigns the node as the head of the singly linked list
	Node *tail; // assigns the node as the tail of the singly linked list
public:
	List(); // Constructor
	List(const List &copyList); // Copy constructor with a constant List object to be copied as its parameter
	void add(string word); // adds a node to the linked list with a student object in the node
	void printList(); // prints the linked list
	void printReverseIterative(); // prints the strings in the linked list in reverse using a loop
	void printReverseRecursive(Node *current);  // prints the strings in the linked list in reverse using the recursive method(requires parameter that points to Node head)
	string searchReverseRecursive(string word, Node *current);
	Node *getHead(); // Node getter that gets the head node of the linked list
	int getCount(); // counts the elements in the linked list
};
#endif

