Node *findMin(Node *root)
{
	while (root->left)
		root = root->left;
	return root;
}

Node *Delete(Node *root, int data)
{
	if (!root)
		return NULL;
	else if (data < root->data)
		root->left = Delete(root->left, data);
	else if (data > root->data)
		root->right = Delete(root->right, data);
	else
	{
		// case 1 : no child
		if (!root->left && !root->right)
		{
			delete root;
			root = NULL;
		}
		// case 2a : 1 child ( right child )
		else if (!root->left)
		{
			Node *temp = root;
			root = root->right;
			delete temp;
		}
		// case 2b : 1 child ( left child )
		else if (!root->right)
		{
			Node *temp = root;
			root = root->left;
			delete temp;
		}
		// case 3 : 2 children
		else
		{
			Node *temp = findMin(root->right);
			root->data = temp->data;
			root->right = Delete(root->right, temp->data);
		}
	}
	return root;
}
