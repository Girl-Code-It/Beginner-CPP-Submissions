//https://leetcode.com/problems/two-sum/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        int n = nums.size();
        vector<int> v;
     
        int twice_count = 0;
        for(int i=0;i<n;i++){
            if(m.find(target - nums[i]) != m.end()){
                v.push_back(m[target-nums[i]]);
                v.push_back(i);
            }
            else
            m[nums[i]] = i;
        }
        
        return v;
    }
};
