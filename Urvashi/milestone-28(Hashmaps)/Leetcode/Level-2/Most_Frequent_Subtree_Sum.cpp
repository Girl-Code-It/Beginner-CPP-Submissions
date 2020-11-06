class Solution
{
public:
    int maxFreq = 0;
    unordered_map<int, int> m;
    int calculateSum(TreeNode *root)
    {
        if (!root)
            return 0;
        int sum = 0;
        sum = root->val + calculateSum(root->left) + calculateSum(root->right);
        m[sum]++;
        maxFreq = max(maxFreq, m[sum]);
        return sum;
    }

    vector<int> findFrequentTreeSum(TreeNode *root)
    {
        calculateSum(root);
        vector<int> v;
        for (auto x : m)
        {
            if (x.second == maxFreq)
                v.push_back(x.first);
        }
        return v;
    }
};
