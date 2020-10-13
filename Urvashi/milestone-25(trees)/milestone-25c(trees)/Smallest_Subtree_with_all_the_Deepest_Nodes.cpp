class Solution
{
public:
    int depth(TreeNode *root)
    {
        if (!root)
            return 0;
        return max(depth(root->left), depth(root->right)) + 1;
    }

    TreeNode *subtreeWithAllDeepest(TreeNode *root)
    {
        if (!root)
            return NULL;
        if (depth(root->left) == depth(root->right))
            return root;
        if (depth(root->left) > depth(root->right))
            root = root->left;
        else
            root = root->right;
        return subtreeWithAllDeepest(root);
    }
};
