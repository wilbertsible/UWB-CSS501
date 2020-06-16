/*
 * CSS501 HW #2: Searching and Sorting
 * Wilbert Lim Sible
 * wsible@uw.edu
 * 2018/10/14 - fall quarter
 *
 * This is the list class that creates the doubly linked list. The functions allow the user to add a node, print the list, sort the list
 * in ascending and descending order, and to search the list for a specific student id.
 *
 * sortAscending - Bubble sort - O(n^2)
 * sortDescending - Bubble sort - O(n^2)
 * search - List traversal - O(n)
 * 
 *
 */
#include <iostream>
#include <string>
#include "list.h"
#include "node.h"
#include "student.h"
using namespace std;

List::List() //Constructor that sets the head and tail to null
{
	head = NULL;
	tail = NULL;
}

void List::addNode(Student* number) // Functions that adds a node to the linked list. If the lnked list is empty, the node is set to the head and tail.
{
	Node *newNode = new Node(number); // Creates a dynamically allocated memory with a node variable

	if (head != NULL) // This means that there is an existing list already made
	{
		Node* current = head; // Initializes a node pointer named current to the head
		while (current->getNext() != NULL) // checks if the next node is not null (looks for the end of the linked list)
		{
			current = current->getNext(); // traverses the next node
		}
		current->setNext(newNode); //Once at the end of the list, this sets the current pointer to newNode
		newNode->setPrevious(current); // sets the previous pointer of the new node to the previous node
		tail = newNode; // sets the tail to a new node

	}
	else // else statemet which tells us that the list is empty
	{
		head = newNode; //sets the head to a new node
		tail = newNode; //sets the tail to the new node
	}
	newNode = NULL;  // sets the new node to null
	delete newNode; // deletes the allocated memory
	
}

void List::printList() // Prints a list of the elements of the linked list
{
	Node *current = head; // Initializes the current pointer and sets it to the head
	while (current != NULL) // checks if the current pointer is not null
	{
		cout << current->getStudentID() << " " << current->getStudentName() << endl; // prints the contents of the object student
		current = current->getNext(); // moves current to the next node
	}
}

void List::swap(Node *left, Node *right) // swaps two nodes
{
	Node *leftPrevious, *rightNext; // initializes two temporary pointers that points to left's previous node and right's next node 
	
	leftPrevious = left->getPrevious(); //assigns leftPrevious to the previous of node left
	rightNext = right->getNext(); // assigns rightNext to the next of node right
	if (left == head) { // if the left node is a head
		head = right; // assigns the right node as the head
		right->setPrevious(NULL); // sets the previous of the right as null
	}
	else // The left node is not the head
	{
		leftPrevious->setNext(right); // sets the leftPrevious node's next to right
		right->setPrevious(leftPrevious); // sets the right node's previous node to leftPrevious
	}
	if (right == tail) // if the right node is a tail
	{
		tail = left; // sets the tail to the left node
		left->setNext(NULL); // sets the next of left to null
	}
	else
	{
		rightNext->setPrevious(left); // sets the previous of rightNext to left node
		left->setNext(rightNext); // sets the next of the left node to rightNext
	}
	// Reconnects right and left
	right->setNext(left); //sets the next of right to left
	left->setPrevious(right); //sets previous of left to right		
}


void List::sortAscending() // Uses bubble sort to sort the linked list in ascending order
{
	Node *current = head; // Initializes a node pointer named current and assigns it to the head
	for (int i = 0; i < getCount(); i++) { // a for loop that counts the element of the linked list and iterates that many times
		while (current != tail) { // checks if the current pointer is not the tail
			//If statement that checks if the next of current is not null and the values of the current is greater than the value of the next of current
			if (current->getNext() != NULL && current->getStudentID() > current->getNext()->getStudentID())
			{
				swap(current, current->getNext()); //swaps the value of current and next of current
			}
			else //If the current is less than the next of current
			{
				current = current->getNext(); // moves the current pointer to the next node
			}
		}
		current = head; // sets the current back to the head once the tail has been reached
	}
}
void List::sortDescending() // Uses bubble sort to sort the linked list in descending order
{
	Node *current = tail;  // Initializes a node pointer named current and assigns it to the head
	for (int i = 0; i < getCount(); i++) // a for loop that counts the element of the linked list and iterates that many times
	{
		while (current != head) { // checks if the current pointer is not the head
			//If statement that checks if the previous of current is not null and the values of the current is greater than the value of the previous of current
			if (current->getPrevious() != NULL && current->getStudentID() > current->getPrevious()->getStudentID())
			{
				swap(current->getPrevious(), current); // swaps the previuous of the current and the current
			}
			else //If the current is less than the previous of current
			{
				current = current->getPrevious(); //Moves the current pointer to the previous node
			}
		}
		current = tail; //sets the current back to the tail
	}
}

string List::search(int id) // Function that searches 
{
	Node *current = head; // Initialies the current and assigns it to the head
	
	while (true) { // while loop that only exits when an if statement returns a value
		if(current->getPrevious() == tail) // if the current's previous is the tail, then the data is not in the list
		{
			return "Data not found."; // returns a string prompt
		}
		else if (current->getStudentID() == id) { //if the current's student id is the same as the parameter's id
			return current->getStudentName(); // return the student name
		}
		else
		{
			current = current->getNext(); // moves the current to the next node
		}
	}
}

int List::getCount() // creates a method getCount that counts the elements in the linked list
{
	int counter = 0; // Initialize count and set it to 0;
	Node *current = head; // Initializes a current pointer and sets it to the list's head
	while (current != NULL)  //while the current pointer is not null
	{
		counter++; // add 1 to the counter
		current = current->getNext(); // moves the current to the next node
		
	}
	return counter; // returns the counter
}