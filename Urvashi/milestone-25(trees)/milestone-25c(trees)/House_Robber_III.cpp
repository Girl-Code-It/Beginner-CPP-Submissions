class Solution
{
public:
    int rob(TreeNode *root)
    {
        if (!root)
            return 0;

        rob(root->left);
        rob(root->right);

        int a = 0, b = root->val;

        if (root->left)
            a += root->left->val;
        if (root->right)
            a += root->right->val;

        if (root->left)
        {
            if (root->left->left)
                b += root->left->left->val;
            if (root->left->right)
                b += root->left->right->val;
        }

        if (root->right)
        {
            if (root->right->left)
                b += root->right->left->val;
            if (root->right->right)
                b += root->right->right->val;
        }

        root->val = max(a, b);
        return root->val;
    }
};
