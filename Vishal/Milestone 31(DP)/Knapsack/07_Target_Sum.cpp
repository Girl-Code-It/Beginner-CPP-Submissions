int memo[21][2001];

class Solution {
public:
    int countsubsetsum(vector<int>& nums, long long s1)
    {       
        int i, j;
        int n = nums.size();
        
        for(i = 0; i < n+1; i++){
            for(j = 0; j < s1+1; j++){
                if(i == 0)
                    memo[i][j] = 0;
                if(j == 0)
                    memo[i][j] = 1;
            }
        }
        
        
        for(i = 1; i < n+1; i++){
            for(j = 0; j < s1+1; j++){
                if(nums[i-1] <= j)
                    memo[i][j] = memo[i-1][j] + memo[i-1][j-nums[i-1]];
                else
                    memo[i][j] = memo[i-1][j];
            }
        }
        
        return memo[n][s1];        
    }
    
    int findTargetSumWays(vector<int>& nums, int S) 
    {
        memset(memo, 0, sizeof(memo[0][0]) * 21 * 2001);
        
        long long sum = accumulate(nums.begin(), nums.end(), 0);
        long long s1 = (sum+S)/2;
        
        if(S > sum || (sum + S) % 2 == 1)
           return 0;
        
        return countsubsetsum(nums, s1);   
    }
};