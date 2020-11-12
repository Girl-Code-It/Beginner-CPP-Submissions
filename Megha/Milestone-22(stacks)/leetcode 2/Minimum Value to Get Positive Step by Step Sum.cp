
//https://leetcode.com/problems/minimum-value-to-get-positive-step-by-step-sum/

class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int sum=0,min=0;
        
        for(int i=0;i<nums.size();i++){
            sum = sum+nums[i];
            if(sum<min){
                min = sum;
            }
        }
        
        return -min + 1;
    }
};
