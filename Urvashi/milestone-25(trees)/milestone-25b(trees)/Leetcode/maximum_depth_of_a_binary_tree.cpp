// find maximum depth of a tree.

class Solution
{
public:
    int maxDepth(TreeNode *root)
    {
        if (!root)
            return 0; // return 0 for null node

        int left_depth = maxDepth(root->left);   // recursively traverse through left subtree
        int right_depth = maxDepth(root->right); // recursively traverse through right subtree
        return max(left_depth, right_depth) + 1; // return depth of the subtree rooted at root
    }
};
