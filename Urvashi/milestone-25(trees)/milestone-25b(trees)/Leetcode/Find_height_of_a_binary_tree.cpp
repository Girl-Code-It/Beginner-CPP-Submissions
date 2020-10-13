/* Binary tree - find height */

#include <iostream>
#include <math.h>
#include <queue>
using namespace std;

struct Node
{
	char data;
	Node *left;
	Node *right;
};

// Function to find height of a binary tree
int FindHeight(Node *root)
{

	if (root == NULL)
		return -1;

	int leftHeight = FindHeight(root->left);
	int rightHeight = FindHeight(root->right);
	return max(leftHeight, rightHeight) + 1;
}

// Function to Insert Node in a Binary Search Tree
Node *Insert(Node *root, char data)
{
	if (root == NULL)
	{
		root = new Node();
		root->data = data;
		root->left = root->right = NULL;
	}
	else if (data <= root->data)
		root->left = Insert(root->left, data);
	else
		root->right = Insert(root->right, data);
	return root;
}

int main()
{
	/*Code To Test the logic
	  Creating an example tree
	            M
			   / \
			  B   Q
			 / \   \
			A   C   Z
    */
	Node *root = NULL;
	root = Insert(root, 'M');
	root = Insert(root, 'B');
	root = Insert(root, 'Q');
	root = Insert(root, 'Z');
	root = Insert(root, 'A');
	root = Insert(root, 'C');
	//height of a binary tree.
	cout << FindHeight(root);
}
