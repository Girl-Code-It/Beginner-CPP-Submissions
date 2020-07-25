class Solution 
{
public:
    bool containsDuplicate(vector<int>& nums) 
    {
        unordered_set<int>s;
        
        for(int i=0,n = nums.size(); i<n; i++)
        {
            if(s.find(nums[i]) != s.end())
                return true;
            
            s.insert(nums[i]);
        }
        return false;
    }
};