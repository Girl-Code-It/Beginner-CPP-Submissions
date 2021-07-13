//https://leetcode.com/problems/house-robber-ii/submissions/

class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size() == 1){
            return nums[0];
        }
        return max(solve(nums,0,nums.size()-1), solve(nums,1,nums.size()));
    }
    int solve(vector<int>& nums,int start,int end){
        int maxi = 0, prevtwo = 0, prevone = 0;
        for(int i=start;i<end;i++){
            maxi = max(nums[i]+prevtwo, prevone);
            prevtwo = prevone;
            prevone = maxi;
        }
        
        return maxi;
    }
};
