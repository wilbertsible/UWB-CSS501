/*
 * CSS501 HW #3: String Reversal
 * Wilbert Lim Sible
 * wsible@uw.edu
 * 2018/10/21 - fall quarter
 *
 * Main function that demonstrates the member functions of the linked list. 
 *
 */

#include <iostream>
#include <string>
#include "node.h"
#include "list.h"
using namespace std;


int main()
{
	List sentence;

	sentence.add("O");
	sentence.add("say");
	sentence.add("can");
	sentence.add("you");
	sentence.add("see");
	sentence.add("by");
	sentence.add("the");
	sentence.add("dawn's");
	sentence.add("early");
	sentence.add("light");

	cout << "---List---" << endl;
	sentence.printList();

	cout << "\n---List in Reverse (Iterative)---" << endl;
	sentence.printReverseIterative();

	cout << "\n---List in Reverse (Recursive)---" << endl;
	sentence.printReverseRecursive(sentence.getHead());
	
	cout << "\n---Deep Copy---" << endl;
	List deepCopy(sentence);
	deepCopy.printList();


	system("pause");


}