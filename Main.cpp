#include <iostream>
using namespace std;

#include "BST.h"

int main()
{
	BST tree;

	tree.insert(22, "Jane");
	tree.insert(22, "Mary");
	tree.insert(0, "Harold");
	tree.insert(9, "Edward");
	tree.insert(37, "Victoria");
	tree.insert(4, "Matilda");
	tree.insert(26, "Oliver");
	tree.insert(42, "Elizabeth");
	tree.insert(19, "Henry");
	tree.insert(4, "Stephen");
	tree.insert(24, "James");
	tree.insert(-1, "Edward");
	tree.insert(31, "Anne");
	tree.insert(23, "Elizabeth");
	tree.insert(1, "William");
	tree.insert(26, "Charles");


	// 31, 1, 9, 26, 4, 22, -1, 25
	cout << *tree.lookup(31) << endl;
	cout << *tree.lookup(1) << endl;
	cout << *tree.lookup(9) << endl;
	cout << *tree.lookup(26) << endl;
	cout << *tree.lookup(4) << endl;
	cout << *tree.lookup(22) << endl;
	cout << *tree.lookup(-1) << endl;
	cout << *tree.lookup(25) << endl;

	return 0;
}