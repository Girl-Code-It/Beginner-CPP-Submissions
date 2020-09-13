/* (https://leetcode.com/problems/target-sum/)

Question:- You are given a list of non-negative integers, a1, a2, ..., an, and a target, S. Now you have 2 symbols + and -. 
For each integer, you should choose one from + and - as its new symbol.
Find out how many ways to assign symbols to make sum of integers equal to target S.

Approach:-
As we know , sum of our two subset sums should be equal to our sum of array elements and diff should be equal to target sum , after solving these two equations we will get a 
particluar value of our subset sum which we will take in our countsubsetsum fxn.

1. Initialisation:- If the target sum is zero then there is only one possibility when both subset sum are equal , if array is empty then we can only achieve 0 target sum.
2. Code:- We will make choice only if our element is less than or equal to the taget sum and we will add all possibilities either by including current element or not we
get our target sum.
3. If taget sum is greater than the sum of array elements then it is not possible .

*/

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
