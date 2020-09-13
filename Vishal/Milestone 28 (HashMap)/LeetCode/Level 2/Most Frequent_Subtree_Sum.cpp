class Solution
{
public:
    int subtreeSum(TreeNode* root, unordered_map<int,int>& sum,int &maxCount)
    {
        if(!root)
            return 0;

        int s = subtreeSum(root->left, sum,maxCount) + subtreeSum(root->right, sum,maxCount) + root->val;

        maxCount = max(maxCount,++sum[s]);
        return s;
    }

    vector<int> findFrequentTreeSum(TreeNode* root)
    {
        unordered_map<int,int>sum;
        vector<int>v;
        int maxCount = 0;

        subtreeSum(root,sum,maxCount);

        for(auto s : sum)
        {
            if(s.second == maxCount)
                v.push_back(s.first);
        }

        return v;
    }
};