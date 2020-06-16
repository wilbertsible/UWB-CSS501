/*
 * CSS501 HW #7: Tree Traversal
 * Wilbert Lim Sible
 * wsible@uw.edu
 * 2018/11/30 - fall quarter
 *
 * cpp file that implements the header file of the Node class.
 *
 *
 */

#include "Node.h"


//Constructor
Node::Node(int data)
{
	this->data = data;
	this->left = nullptr;
	this->right = nullptr;
}

void Node::setData(int data)
{
	this->data = data;
}

int Node::getData()
{
	return data;
}

void Node::setLeft(Node *left)
{
	this->left = left;
}

Node* Node::getLeft()
{
	
	return left;

}

void Node::setRight(Node *right)
{
	this->right = right;
}

Node* Node::getRight()
{
	return right;
}
