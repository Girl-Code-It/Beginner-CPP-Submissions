/* (https://leetcode.com/problems/partition-equal-subset-sum/)

Question:- Given a non-empty array containing only positive integers, find if the array can be partitioned into two subsets such that the 
sum of elements in both subsets is equal.

Approach:- 
1. We have to divide our array into two subsets of equal sum means if we find the half of the sum of the array elements then next half will also be there, so we have our sum as
half of sum of all the elements of the array and will procede only if sum of elements of our array is even because only then the array can be divided into two equal halves.

2. Initialisation:- If value of sum is 0 then we can use null array so will put true , if our array is empty then can't achieve our given sum so fill false.

3. Code:- We will make choice from elements which are less than or equal to our given sum and will take bit or to get true if after including or not including 
the given element we are getting the sum .

*/

class Solution
{
public:
    bool isSubset(vector<int> &nums, int sum, int n)
    {
        bool DP[n + 1][sum + 1];

        for (int i = 0; i <= n; i++)
            DP[i][0] = true;

        for (int i = 1; i <= sum; i++)
            DP[0][i] = false;

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= sum; j++)
            {
                if (nums[i - 1] <= j)
                    DP[i][j] = DP[i - 1][j - nums[i - 1]] || DP[i - 1][j];
                else
                    DP[i][j] = DP[i - 1][j];
            }
        }
        return DP[n][sum];
    }
    bool canPartition(vector<int> &nums)
    {
        int n = nums.size() , sum = 0;

        for (int i = 0; i < n; i++)  
            sum += nums[i];

        if (sum & 1)
            return false;
        
        return isSubset(nums, sum/2, n);
    }
};
