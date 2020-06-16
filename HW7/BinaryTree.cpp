/*
 * CSS501 HW #7: Tree Traversal
 * Wilbert Lim Sible
 * wsible@uw.edu
 * 2018/11/30 - fall quarter
 *
 * The Binary tree functions were implemented in this cpp file
 *
 *
 */

#include <iostream>
#include <queue>
#include "BinaryTree.h"
#include "Node.h"
using namespace std;

//Constructor
BinaryTree::BinaryTree(int data)
{
	
	Node *newNode = new Node(data);
	root = newNode;
	ptr = root;
}

//Adds the left child of the parent
void BinaryTree::addLeft(int left)
{
	if (ptr->getLeft() == nullptr)
	{
		Node *newNode = new Node(left);
		ptr->setLeft(newNode);
	}
	else
	{
		cout << "Error: Left child is filled." << endl;
	}
}

//Adds the right child of the parent
void BinaryTree::addRight(int right)
{
	if (ptr->getRight() == nullptr)
	{
		Node *newNode = new Node(right);
		ptr->setRight(newNode);
	}
	else
	{
		cout << "Error: Left child is filled." << endl;
	}
	
}

// Getter for the left child
Node* BinaryTree::getLeftChild()
{
	return root->getLeft();
}

//Getter for the right child
Node* BinaryTree::getRightChild()
{
	return root->getRight();
}

//Getter for the root
Node* BinaryTree::getRoot()
{
	return root;
}

// sets the ptr pointer to the desired parent
void BinaryTree::setPtr(Node* parent)
{
	this->ptr = parent;
}

// Resets the pointer to the root node
void BinaryTree::resetPtr()
{
	this->ptr = root;
}	

// Pre-order traversal of the tree  (NLR)
void BinaryTree::preOrder(Node *root)
{
	cout << root->getData() << " ";
	
	if (root->getLeft() != nullptr)
	{
		preOrder(root->getLeft());
	}
	if (root->getRight() != nullptr)
	{
		preOrder(root->getRight());
	}
}


//In-order traversal of the tree (LNR)
void BinaryTree::inOrder(Node *root)
{

	if (root->getLeft() != nullptr)
	{
		inOrder(root->getLeft());
	}

	cout << root->getData() << " ";

	if (root->getRight() != nullptr)
	{
		inOrder(root->getRight());
	}
}


//Post-order traversal of the tree (LRN)
void BinaryTree::postOrder(Node *root)
{
	if (root->getLeft() != nullptr)
	{
		postOrder(root->getLeft());
	}

	if (root->getRight() != nullptr)
	{
		postOrder(root->getRight());
	}

	cout << root->getData() << " ";

}

// Breadth-first search traversal of the tree
void BinaryTree::breadthFirst()
{
	
	queue<Node*>bfs;
	bfs.push(ptr);
	while (!bfs.empty())
	{
		ptr = bfs.front();
		if (ptr->getLeft() != nullptr)
		{
			bfs.push(ptr->getLeft());
		}
		if (ptr->getRight() != nullptr)
		{
			bfs.push(ptr->getRight());
		}
		int number = bfs.front()->getData();
		cout << number << " ";
		bfs.pop();
		
	}



}


