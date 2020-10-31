int IterativeMaxElement(Node *root)
{
	if (!root)
	{
		return 0;
	}
	if (root->right)
	{
		root = root->right;
	}
	return root->data;
}

int IterativeMinElement(Node *root)
{
	if (!root)
	{
		return 0;
	}
	if (root->left)
	{
		root = root->left;
	}
	return root->data;
}

int RecursiveMaxElement(Node *root)
{
	if (!root)
	{
		return 0;
	}
	if (!root->right)
	{
		return root->data;
	}
	return RecursiveMaxElement(root->right);
}

int RecursiveMinElement(Node *root)
{
	if (!root)
	{
		return 0;
	}
	if (!root->left)
	{
		return root->data;
	}
	return RecursiveMaxElement(root->left);
}
