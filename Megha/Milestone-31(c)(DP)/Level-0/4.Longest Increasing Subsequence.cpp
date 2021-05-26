//https://leetcode.com/problems/longest-increasing-subsequence/submissions/

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        int t[n+1];
            
        for(int i=0;i<n;i++){
            t[i] = 1;
            for(int j=0;j<i;j++){
                if(nums[j] < nums[i])
                    t[i] = max(t[i],1+t[j]);
            }
        }
        
        int ans = 0;
        for(int i=0;i<n;i++){
            ans = max(ans,t[i]);
        }
        
        return ans;
    }
};
