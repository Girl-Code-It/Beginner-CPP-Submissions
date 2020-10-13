int largestBST(TreeNode *root)
{
	if (!root)
		return 0;
	if (isBST(root, INT_MIN, INT_MAX))
		return size(root);
	return max(largestBST(root->left), largestBST(root->right));
}

int Size(TreeNode *root)
{
	if (!root)
		return 0;
	return 1 + Size(root->left) + Size(root->right);
}

bool isBST(TreeNode *root, int min, int max)
{
	if (!root)
		return true;
	if (root->val < min || root->val > max)
		return false;
	return isBST(root->left, min, root->val - 1) &&
		   isBST(root->right, root->val + 1, max);
}
