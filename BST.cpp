#ifndef BST_CPP
#define BST_CPP

#include <iostream>
using namespace std;

#include "BST.h"

struct BST::Node
{
	Node(Key, Item);		// Node constructor
	BST::Key key;
	BST::Item item;
	Node* leftChild;
	Node* rightChild;
};

BST::Node::Node(BST::Key k, BST::Item i)
{
	key = k;
	item = i;
	leftChild = nullptr;
	rightChild = nullptr;
}

BST::~BST()					// Destructor
{
	
}

bool BST::isLeaf(Node* n)
{
	if (n->leftChild == nullptr && n->rightChild == nullptr)
		return true;
	else
		return false;
}

void BST::insert(Key k, Item i)		// Wrapper
{
	insertRec(k, i, root);			// Call worker function
}

void BST::insertRec(Key k, Item i, Node* & current)			// Worker
{
	// worker definition goes here
	if (current == nullptr)				// Create new node
	{
		current = new Node(k, i);
		return;
	}
	
	if (k == current->key)				// If duplicate, replace with new key and item
	{
		current->key = k;
		current->item = i;
		return;
	}

	if (k < current->key)			
	{
		insertRec(k, i, current->leftChild);
	}
	else
	{
		insertRec(k, i, current->rightChild);
	}
}

/*
BST::Item* BST::lookup(Key soughtKey)	// Wrapper
{
	return lookupRec(soughtKey, root);	// Call worker function
}
*/

BST::Item* BST::lookupRec(Key soughtKey, Node* currentNode)	// Worker
{
	// worker definition goes here

	return &currentNode->item;
}


BST::Item* BST::lookup(Key k)		// Non-Recursive - using iteration (while loop)
{
	Node* current = root;		

	// Traverse untill root reaches to dead end 
	while (current != NULL)
	{
		if (k < current->key)				// pass left subtree as new tree
			current = current->leftChild;	
		else if (k > current->key)			// pass right subtree as new tree
			current = current->rightChild;
		else
			return &current->item;		
	}
	if (current == nullptr)
	{
		cout << k << " not found" << endl;
	}
	return nullptr;
}


#endif