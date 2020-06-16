/*
 * CSS501 HW #3: Searching and Sorting
 * Wilbert Lim Sible
 * wsible@uw.edu
 * 2018/10/21 - fall quarter
 *
 * This is the list class that creates the singly linked list. This function creates the singly linked list and adds the 
 * data into that list. It has a deep copy constructor that copies the all the elements of the linked list into a new list.
 * It also has the helper functions getCount to count the elements of a linked list, and getHead to get the private variable head.
 * The list class also has the printRevereseIterative and printReverseRecursive functions that prints the linked list backwards
 * using loops and recursion respectively.
 *
 * Copy Constructor - O(n)
 * Iterative solution - O(n^2)
 * Recursive solution - O(n)
 *
 */
#include <iostream>
#include <string>
#include "list.h"
#include "node.h"

using namespace std;

List::List() //Constructor that sets the head and tail to null
{
	head = NULL;
	tail = NULL;
}
List::List(const List &original) // Copy constructor that deep copies the original Linked List
{
	Node *copy = new Node(original.head->getWord()); // Creates a new node with the original list head's word as the parameter
	Node *current = original.head; // Sets a pointer current as the original's head
	head = copy; // Sets the head of the new list to node copy
	while (current->getNext() != NULL) // Checks so that the pointer does not go beyond the original's linked list (nullPtrException handle)
	{
		current = current->getNext(); // Sets the current to the next node
		Node *newNode = new Node(current->getWord());
		copy->setNext(newNode);
		copy = copy->getNext();
		tail = newNode;
		
	}
	
}

void List::add(string word) // Functions that adds a node to the linked list. If the lnked list is empty, the node is set to the head and tail.
{
	Node *newNode = new Node(word); // Creates a dynamically allocated memory with a node variable

	if (head != NULL) // This means that there is an existing list already made
	{
		Node* current = tail; // Initializes a node pointer named current to the head
		current->setNext(newNode); //Once at the end of the list, this sets the current pointer to newNode
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
		cout << current->getWord() << endl; // prints the contents of the object student
		current = current->getNext(); // moves current to the next node
	}
}

void List::printReverseIterative() // prints the string in reverse using the iterative solution
{
	Node *current = head; // Initializes the current pointer and sets it to the head
	
	for (int i = 0; i < getCount(); i++) // For loop that counts how many times the loop will go through the list
	{
		for (int j = 0; j < getCount() - 1 - i; j++) // For loop that traverses the linked list
		{
			current = current->getNext(); // Sets the current pointer to the next pointer
		}
		cout << current->getWord() << endl; // Prints out the value that the current pointer is pointing at
		current = head; // Sets the current pointer back to head
	}
}

void List::printReverseRecursive(Node *current) // Prints the strings in reverse using the recursive solution
{
	if (current != NULL) // Checks if there is still an element in the current pointer
	{
		printReverseRecursive(current->getNext()); // Recursively calls the function and adds to the stack
		cout << current->getWord() << endl; // Prints all of the elements in the stack
	}
	
}

Node* List::getHead() // head getter
{
	return head;
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
