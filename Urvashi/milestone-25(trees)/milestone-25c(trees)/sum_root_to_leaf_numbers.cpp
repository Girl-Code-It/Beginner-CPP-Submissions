class Solution
{
public:
    int SumDigits(TreeNode *root, int num)
    {
        if (!root)
            return 0;

        num = num * 10 + root->val;

        if (!root->left && !root->right)
            return num;
        else
            return SumDigits(root->left, num) + SumDigits(root->right, num);
    }

    int sumNumbers(TreeNode *root)
    {
        return SumDigits(root, 0);
    }
};
