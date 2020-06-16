/*
 * CSS501 HW #2: Searching and Sorting
 * Wilbert Lim Sible
 * wsible@uw.edu
 * 2018/10/14 - fall quarter
 *
 * This is the list header which cotains the interface for the list class. The list class identifies the head and the tail of the 
 * doubly linked list. It has the functions addNode, printList, swap, sortAscending, sortDescending, and search. 
 *
 */

#ifndef LIST_H
#define LIST_H
#include "node.h"
#include "student.h"

class List
{
private:
	Node *head; // assigns the node as the head of the doubly linked list
	Node *tail; // assigns the node as the tail of the doubly linked list
public:
	List();
	void addNode(Student* ); // adds a node to the linked list with a student object in the node
	void printList(); // prints the linked list
	void swap(Node*, Node*); // swaps two nodes in the linked list
	void sortAscending(); // sorts the list in ascending order
	void sortDescending(); //sorts the list in descending order 
	string search(int id); // searches the list for an id number
	int getCount(); // counts the elements in the linked list
};
#endif