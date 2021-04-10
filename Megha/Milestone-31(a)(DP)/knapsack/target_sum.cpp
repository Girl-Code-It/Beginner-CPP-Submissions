//https://leetcode.com/problems/target-sum/

int t[21][2001];

class Solution {
public:
    int subsetSum(vector<int>& nums, int sum) {
        int i,j;
        int n = nums.size();
        // We will create matrix t of size (n+1)*(sum+1)
    
    /* if j is 0 i.e. sum is 0 and i i.e. arr has whatever values it will always return true
    because if sum is 0 then we don't need to find if subset of array is equal to sum or not */
    for(i=0;i<n+1;i++){
        t[i][0] = 1;
    }

    /* But if i is 0 i.e array has no value and sum has some value then we can nver make 
    subset of array value equal to sum so it will always give false */
    for(i=1;i<sum+1;i++){
        t[0][i] = 0;
    }
        
        for(int i=1;i<n+1;i++){
        for(int j=0;j<sum+1;j++){
            // if subset sum value grater than sum then we will proceed further
            if(nums[i-1] <= j){
                t[i][j] = t[i-1][j-nums[i-1]] + t[i-1][j];
            }
            // if subset sum value less than sum then we will proceed further and we add value to it
            else{
                t[i][j] = t[i-1][j];
            }
        }
    }
   
    // return total count
    return t[n][sum];
    }
    int findTargetSumWays(vector<int>& nums, int S) {
     int n = nums.size();
        long long total = 0;
        for(int i=0;i<n;i++){
            total += nums[i];
        }
        
        long long sum = (total + S)/2;
        
        if(S > total || (S + total)%2== 1){
            return 0;
        }
    return subsetSum(nums,sum);
    }
};
