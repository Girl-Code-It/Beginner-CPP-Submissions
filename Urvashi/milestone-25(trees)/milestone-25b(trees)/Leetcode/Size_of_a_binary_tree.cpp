class solution{
	public:
	
	int SizeOfBinaryTree(node* root)
	{
		if(!root)
		    return 0;
		
		return 1+ SizeOfBinaryTree(root->left) + SizeOfBinaryTree(root->right);
	}
};
