#ifndef BST_H
#define BST_H

#include <string>
using namespace std;

class BST
{
private:
	struct Node;
	Node* root = nullptr;
	static bool isLeaf(Node*);		//Helper functions - only accesible by member functions

public:
	using Key = int;
	using Item = std::string;
	BST() = default;				// Default constructor
	~BST();							// Destructor
	void insert(Key, Item);							// Wrapper - non recursive
	static void insertRec(Key, Item, Node* &);		// Worker - recursive

	Item* lookup(Key);					// Wrapper - non recursive
	static Item* lookupRec(Key, Node*);	// Worker - recursive

};

#endif