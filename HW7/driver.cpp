/*
 * CSS501 HW #7: Tree Traversal
 * Wilbert Lim Sible
 * wsible@uw.edu
 * 2018/11/30 - fall quarter
 *
 * This is the driver program of the tree traversal program.
 * Three trees with left-unbalanced, right-unbalanced, 
 * and balanced tree were traversed using depth-first seach
 * with pre-order, in-order, and post-order traversal, and
 * breadth-first search traversal. 
 */

#include <iostream>
#include "Node.h"
#include "BinaryTree.h"

using namespace std;

int main()
{
	// Binary Tree with left-unbalanced tree is initialized and the tree is populated
	BinaryTree leftBias(1);
	leftBias.addLeft(2);
	leftBias.addRight(3);
	leftBias.setPtr(leftBias.getRoot()->getLeft());
	leftBias.addLeft(4);
	leftBias.addRight(5);
	leftBias.resetPtr();
	leftBias.setPtr(leftBias.getRoot()->getLeft()->getLeft());
	leftBias.addLeft(6);
	leftBias.addRight(7);
	leftBias.resetPtr();
	leftBias.setPtr(leftBias.getRoot()->getLeft()->getLeft()->getLeft());
	leftBias.addLeft(8);
	leftBias.addRight(9);
	leftBias.resetPtr();
	leftBias.setPtr(leftBias.getRoot()->getLeft()->getLeft()->getRight());
	leftBias.addLeft(10);
	leftBias.resetPtr();

	// Binary Tree with right-unbalanced tree is initialized and the tree is populated
	BinaryTree rightBias(1);
	rightBias.addLeft(2);
	rightBias.addRight(3);
	rightBias.setPtr(rightBias.getRoot()->getRight());
	rightBias.addLeft(4);
	rightBias.addRight(5);
	rightBias.resetPtr();
	rightBias.setPtr(rightBias.getRoot()->getRight()->getRight());
	rightBias.addLeft(6);
	rightBias.addRight(7);
	rightBias.resetPtr();
	rightBias.setPtr(rightBias.getRoot()->getRight()->getRight()->getLeft());
	rightBias.addRight(8);
	rightBias.resetPtr();
	rightBias.setPtr(rightBias.getRoot()->getRight()->getRight()->getRight());
	rightBias.addLeft(9);
	rightBias.addRight(10);
	rightBias.resetPtr();


	// Binary Tree with balanced is initialized and the tree is populated
	BinaryTree balance(1);
	balance.addLeft(2);
	balance.addRight(3);
	balance.setPtr(balance.getRoot()->getLeft());
	balance.addLeft(4);
	balance.addRight(5);
	balance.resetPtr();
	balance.setPtr(balance.getRoot()->getRight());
	balance.addLeft(6);
	balance.addRight(7);
	balance.resetPtr();
	balance.setPtr(balance.getRoot()->getLeft()->getLeft());
	balance.addLeft(8);
	balance.addRight(9);
	balance.resetPtr();
	balance.setPtr(balance.getRoot()->getLeft()->getRight());
	balance.addLeft(10);
	balance.addRight(11);
	balance.resetPtr();
	balance.setPtr(balance.getRoot()->getRight()->getLeft());
	balance.addLeft(12);
	balance.addRight(13);
	balance.resetPtr();
	balance.setPtr(balance.getRoot()->getRight()->getRight());
	balance.addLeft(14);
	balance.addRight(15);
	balance.resetPtr();
	

	cout << "           1" << endl;
	cout << "         /   \\" << endl;
	cout << "        2     3" << endl;
	cout << "       / \\" << endl;
	cout << "      4   5 " << endl;
	cout << "    /  \\" << endl;
	cout << "   6     7 " << endl;
	cout << " /  \\  /" << endl;
	cout << "8   9  10" << endl;
	cout << "Tree with left bias:" << endl;
	cout << "pre-order: " << endl;
	leftBias.preOrder(leftBias.getRoot());
	cout << endl;
	cout << "in-order: " << endl;
	leftBias.inOrder(leftBias.getRoot());
	cout << endl;
	cout << "post-order: " << endl;
	leftBias.postOrder(leftBias.getRoot());
	cout << endl;
	cout << "Breadth-first search: " << endl;
	leftBias.breadthFirst();
	cout << endl;
	cout << endl;

	cout << "       1" << endl;
	cout << "     /   \\" << endl;
	cout << "    2      3" << endl;
	cout << "         /   \\" << endl;
	cout << "        4     5 " << endl;
	cout << "            /  \\" << endl;
	cout << "           6    7 " << endl;
	cout << "            \\  / \\" << endl;
	cout << "             8 9   10" << endl;
	cout << "Tree with right bias:" << endl;
	cout << "pre-order: " << endl;
	rightBias.preOrder(rightBias.getRoot());
	cout << endl;
	cout << "in-order: " << endl;
	rightBias.inOrder(rightBias.getRoot());
	cout << endl;
	cout << "post-order: " << endl;
	rightBias.postOrder(rightBias.getRoot());
	cout << endl;
	cout << "Breadth-first search: " << endl;
	rightBias.breadthFirst();
	cout << endl;
	cout << endl;

	cout << "          1" << endl;
	cout << "      /       \\" << endl;
	cout << "     2         3" << endl;
	cout << "   /   \\     /   \\" << endl;
	cout << "  4    5     6    7 " << endl;
	cout << " / \\  / \\   / \\  / \\" << endl;
	cout << "8  9 10 11 12 13 14 15 " << endl;
	cout << "Full tree:" << endl;
	cout << "pre-order: " << endl;
	balance.preOrder(balance.getRoot());
	cout << endl;
	cout << "in-order: " << endl;
	balance.inOrder(balance.getRoot());
	cout << endl;
	cout << "post-order: " << endl;
	balance.postOrder(balance.getRoot());
	cout << endl;
	cout << "Breadth-first search: " << endl;
	balance.breadthFirst();
	cout << endl;
	cout << endl;

	system("pause");
	
}