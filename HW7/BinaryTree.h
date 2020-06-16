/*
 * CSS501 HW #7: Tree Traversal
 * Wilbert Lim Sible
 * wsible@uw.edu
 * 2018/11/30 - fall quarter
 *
 * This is the header file for the binary tree class.
 * It has the properties root pointer which points to the root
 * of the tree, and functions that sets and gets root, left, and
 * right children. Also, the pre-order, in-order, and post-order traversal
 * and breadth-first search functions were declared in this header file.
 *
 */

#include "Node.h"
#ifndef BINARYTREE_H
#define BINARYTREE_H
class BinaryTree
{
private:
	Node *root;
	Node *ptr; // Pointer that points to the parent
public:
	BinaryTree(int data);
	void addLeft(int left);
	void addRight(int right);
	Node* getLeftChild();
	Node* getRightChild();
	Node* getRoot();
	void setPtr(Node*);
	void resetPtr();
	void preOrder(Node*);
	void inOrder(Node*);
	void postOrder(Node*);
	void breadthFirst();


};
#endif;

