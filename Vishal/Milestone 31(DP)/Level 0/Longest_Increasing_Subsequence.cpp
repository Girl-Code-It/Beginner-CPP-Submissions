// https://leetcode.com/problems/longest-increasing-subsequence/

// Time Complexity - O(N^2), Space Complexity - O(N)

class Solution
{
public:
    int lengthOfLIS(vector<int> &arr)
    {
        int n = arr.size();

        //If arr is empty then answer will be 0. And if size = 1 then answer will be 1.
        if (n <= 1)
            return n;

        //Create a lookup table
        int dp[n];
        for (int i = 0; i < n; i++)
        {
            //Initialize with 1. (Because minimum answer will be 1)
            dp[i] = 1;
            for (int j = 0; j < i; j++)
            {
                //If arr[j] is smaller then arr[i], then it can be added to sequence
                if (arr[j] < arr[i])
                    dp[i] = max(dp[i], dp[j] + 1);
            }
        }

        //Now find max length in lookup table
        int ans = 1;
        for (int i = 0; i < n; i++)
            ans = max(ans, dp[i]);
            
        return ans;
    }
};