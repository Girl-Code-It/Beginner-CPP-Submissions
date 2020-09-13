class Solution
{
public:
    int numIdenticalPairs(vector<int>& nums)
    {
        unordered_map<int,int>m;

        int n = nums.size(),count = 0;

        for(int i=0; i<n; i++)
            m[nums[i]]++;

        for(auto itr : m)
            count += ((itr.second)*(itr.second - 1)/2);

        return count;
    }
};