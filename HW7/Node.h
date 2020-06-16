/*
 * CSS501 HW #7: Tree Traversal
 * Wilbert Lim Sible
 * wsible@uw.edu
 * 2018/11/30 - fall quarter
 *
 * Node class header file. It has the data, pointer to the left,
 * and pointer to the right as properties, and getters and setters
 * for each property.
 *
 */

#ifndef NODE_H
#define NODE_H
class Node
{
private:
	int data;
	Node *left;
	Node *right;
public:
	Node(int);
	void setData(int);
	int getData();
	void setLeft(Node*);
	Node* getLeft();
	void setRight(Node*);
	Node *getRight();
};
#endif
