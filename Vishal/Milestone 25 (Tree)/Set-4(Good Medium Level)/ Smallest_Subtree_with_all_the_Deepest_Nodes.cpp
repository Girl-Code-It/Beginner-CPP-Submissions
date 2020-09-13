class Solution
{
public:
    int Height(TreeNode* root)
    {
        if(!root)
            return 0;

        return 1 + max(Height(root->left),Height(root->right));
    }
    TreeNode* subtreeWithAllDeepest(TreeNode* root)
    {
        if(!root)
            return NULL;

        int leftHeight = Height(root->left);
        int rightHeight = Height(root->right);

        if(leftHeight == rightHeight)
            return root;
        else
        {
            if(leftHeight < rightHeight)
                return subtreeWithAllDeepest(root->right);
            else
                return subtreeWithAllDeepest(root->left);
        }
    }
};