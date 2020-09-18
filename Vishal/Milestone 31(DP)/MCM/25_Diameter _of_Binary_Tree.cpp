// https://leetcode.com/problems/diameter-of-binary-tree/

class Solution
{
public:
    int solve(TreeNode *root, int &res)
    {
        if (!root)
            return 0;

        int left = solve(root->left, res);
        int right = solve(root->right, res);

        res = max(1 + left + right, res);

        return max(left, right) + 1;
    }

    int diameterOfBinaryTree(TreeNode *root)
    {
        if (!root)
            return 0;

        int res = INT_MIN;
        solve(root, res);
        return res - 1;
    }
};