// https://leetcode.com/problems/longest-increasing-subsequence/

class Solution {
public:
    int solve(vector<int>& nums , int n)
    {
        int DP[n+1];
        DP[0] = 1;
        for(int i = 1 ; i < n ; i++)
        {
            int temp = 0;
            for(int j = 0 ; j < i ; j++)
            {
                if(nums[j] < nums[i])
                    temp = max(temp , DP[j]);
            }  
            DP[i] = temp+1;
        }
        int ans = 0;
        for(int i = 0 ; i < n ; i++)
            ans = max(ans , DP[i]);
        
        return ans;
    }
    
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        return solve(nums , n);
    }
};
