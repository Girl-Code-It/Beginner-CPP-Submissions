//  https://leetcode.com/problems/house-robber-ii/

class Solution {
public:
    int helper(vector<int>nums , int start , int end)
    {
        int n = end - start + 1;
        
        vector<int>DP(n);
        DP[0] = nums[start];
        DP[1] = max(nums[start] , nums[start+1]);
        
        for(int i = start + 2; i <= end; i++)
        {
            DP[i-start] = max(nums[i] + DP[i-start-2] , DP[i-start-1]);
        }
        
        return DP[end - start];
    }
    
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 0) return 0; // if there is no house , the loot will be zero.
        if(n == 1) return nums[0]; // if there is only one house then i will loot from that house.
        // if there are two houses then i will loot the one which has more money :p
        if(n == 2) return max(nums[0] , nums[1]); 
        
        int ans1 = helper(nums , 0 , n-2);
        int ans2 = helper(nums , 1 , n-1);
        
        return max(ans1,ans2);
    }
};
