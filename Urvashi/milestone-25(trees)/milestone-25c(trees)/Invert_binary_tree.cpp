class Solution
{
public:
    TreeNode *invertTree(TreeNode *root)
    {
        if (root == NULL)
            return root;
        swap(root->left, root->right); // swap left and right subtree for all nodes
        invertTree(root->left);
        invertTree(root->right);
        return root;
    }
};
