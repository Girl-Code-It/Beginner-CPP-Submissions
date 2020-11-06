// find minimum depth of a tree.

class Solution
{
public:
    int minDepth(TreeNode *root)
    {
        if (!root) // empty
            return 0;

        if (!root->left && !root->right) // only root node
            return 1;

        if (!root->left) // if there is no left subtree
            return minDepth(root->right) + 1;

        if (!root->right) //if there is no left subtree
            return minDepth(root->left) + 1;

        return min(minDepth(root->left), minDepth(root->right)) + 1; // if both left and right subtree
    }
};
