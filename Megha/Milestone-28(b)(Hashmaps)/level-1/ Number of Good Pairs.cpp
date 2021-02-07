//https://leetcode.com/problems/number-of-good-pairs/submissions/

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int> m;
        int n = nums.size();
        int count = 0;
        
        for(int i=0;i<n;i++){
            if(m.find(nums[i]) != m.end()){
                count += m[nums[i]];
            }
            m[nums[i]]++;
        }
        
        return count;
    }
};
