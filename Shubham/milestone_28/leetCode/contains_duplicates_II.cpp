class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
        unordered_map<int, int> m; // element : index
        
        for(int i = 0; i < nums.size(); i++)
        {
            if(m.find(nums[i]) != m.end())    
            {
                int j = m[nums[i]];
                if(abs(i - j) <= k)
                    return true;
                m[nums[i]] = i;
            }
            else
                m.insert({nums[i], i});
        }
        return false;
    }
};
