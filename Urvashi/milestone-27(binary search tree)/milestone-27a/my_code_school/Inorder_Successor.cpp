Node *find(Node *root, int data)
{
	if (!root)
		return NULL;
	else if (data == root->data)
		return root;
	else if (data < root->data)
		return find(root->left, data);
	else
		return find(root->right, data);
}

Node *findMin(Node *root)
{
	if (!root)
		return NULL;
	while (root->left)
		root = root->left;
	return root;
}

Node *getSuccessor(Node *root, int data)
{
	Node *current = find(root, data);
	if (!current)
		return NULL;
	if (current->right)
		return findMin(current->right);

	else
	{
		Node *successor = NULL;
		Node *ancestor = root;
		while (ancestor != current)
		{
			if (current->data < ancestor->data)
			{
				successor = ancestor;
				ancestor = ancestor->left;
			}
			else
				ancestor = ancestor->right;
		}
		return successor;
	}
}
