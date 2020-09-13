class Solution
{
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k)
    {
        //Store last index
        unordered_map<int,int>m;
        
        for(int i=0,n = nums.size(); i<n; i++)
        {
            if(m.find(nums[i]) != m.end())
            {
                if(i - m[nums[i]] <= k)
                    return true;
            }
            m[nums[i]] = i;
        }
        return false;
    }
};