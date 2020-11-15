class Solution
{
public:
    int goodNodes(TreeNode *root, int n = INT_MIN)
    {
        if (!root)
            return 0;
        if (n <= root->val)
            return 1 + goodNodes(root->left, root->val) + goodNodes(root->right, root->val);
        else
            return goodNodes(root->left, n) + goodNodes(root->right, n);
    }
};
