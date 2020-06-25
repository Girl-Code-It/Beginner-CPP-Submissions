class solution{
	public:
	
	bool SameBinaryTree(node* a , node* b)
	{
		if(!a && !b)
		return true;
		
		if(!a || !b)
		return false;
		
		return ((a->val == b->val) 
		&& SameBinaryTree(a->left , b->left) 
		&& SameBinaryTree(a->right , b->right));
	}
};
