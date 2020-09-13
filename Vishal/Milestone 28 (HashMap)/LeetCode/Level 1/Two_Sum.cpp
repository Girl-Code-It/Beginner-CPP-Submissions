class Solution
{
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        //Store element & index
        unordered_map<int,int>m;
        vector<int>v(2);

        for(int i=0,n = nums.size(); i<n; i++)
        {
            if(m.find(target-nums[i]) != m.end())
            {
                v[0] = i;
                v[1] = m[target-nums[i]];
                break;
            }

            m[nums[i]] = i;
        }
        return v;
    }
};