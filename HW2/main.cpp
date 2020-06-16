/*
 * CSS501 HW #2: Searching and Sorting
 * Wilbert Lim Sible
 * wsible@uw.edu
 * 2018/10/14 - fall quarter
 *
 * This is the driver program for the linked list created. Several student objects were created and then assigned into the list. The list was 
 * then sorted in ascending order, and then descending order. Lastly, one of the student's id was used to search for the student's name.
 *
 */

#include <iostream>
#include "node.h"
#include "list.h"
#include "student.h"
using namespace std;
int main()

{	

	// Creates students object with id number and name
	Student a(18001, "wilbert");
	Student b(18009, "david");
	Student c(18002, "eric");
	Student d(18008, "lance");
	Student e(18003, "justine");
	Student f(18007, "clark");
	Student g(18004, "caleb");
	Student h(18006, "alyssa");
	Student i(18041, "janelle");
	Student j(18019, "christian");
	Student k(17956, "laurence");
	Student l(18321, "christina");



	List linkedList; //Creates a linked list
	//puts the student objects into the linked list
	linkedList.addNode(&a);
	linkedList.addNode(&b);
	linkedList.addNode(&c);
	linkedList.addNode(&d);
	linkedList.addNode(&e);
	linkedList.addNode(&f);
	linkedList.addNode(&g);
	linkedList.addNode(&h);
	linkedList.addNode(&i);
	linkedList.addNode(&j);
	linkedList.addNode(&k);
	linkedList.addNode(&l);

	
	cout << "Students entered: \n" << endl;
	linkedList.printList(); // Prints out the linked list
	cout << "----------" << endl;
	cout << "\nSorted in ascending order: " << endl;
	linkedList.sortAscending(); // Sorts the list in ascending order
	linkedList.printList(); // Prints the linked list
	cout << "----------" << endl;
	cout << "\nSorted in descending order: " << endl;
	linkedList.sortDescending(); // Sorts the list in descending order
	linkedList.printList(); // Prints the list
	cout << "----------" << endl;
	int search = 18007;// Initializes and sets search to a student id
	cout << "\nSearching for " << search << ":  " << endl;
	string name = linkedList.search(search); // search function that searches for the user id
	cout << name << endl; // Prints out the name associated with the user id
	system("pause");
}