/*
  Make a pair :
    1.first element of the pair is the money when root is robbed
    2.second element of the pair is the money when root is not robbed
*/
class Solution
{
public:
    int rob(TreeNode* root)
    {
        vector<int> res = robSub(root);
        return max(res[0], res[1]);
    }

    vector<int> robSub(TreeNode* root)
    {
        if(!root)
            return vector<int>(2,0);

        vector<int> left = robSub(root->left);
        vector<int> right = robSub(root->right);

        vector<int> res(2,0);
        res[0] = max(left[0], left[1]) + max(right[0], right[1]);
        res[1] = root->val + left[0] + right[0];

        return res;
    }
};