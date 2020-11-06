class Solution
{
public:
    bool hasPathSum(TreeNode *root, int sum)
    {

        if (!root) // if empty
            return false;

        //if this is leaf node, then check sum and it's value.
        if (root->left == nullptr && root->right == nullptr) // condition of leaf node
        {
            if (sum == root->val)
                return true;
            else
                return false;
        }

        if (hasPathSum(root->left, sum - root->val)) // checking for left subtree
        {
            return true;
        }

        if (hasPathSum(root->right, sum - root->val)) // checking for right subtree
        {
            return true;
        }

        return false;
    }
};
