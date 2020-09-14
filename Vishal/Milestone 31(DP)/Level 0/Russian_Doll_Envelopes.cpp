// https://leetcode.com/problems/russian-doll-envelopes/

/*
    First refer longest increasing subsequnces problem.

    Now if you want to put an envelope in another envelope so its size(area) must be smaller then another envelopes.
    So sort the envelopes according to their width and then find longest increasing subsequences.

    Time complexity - O(N^2), Space Complexity - O(N)
*/

class Solution
{
public:
    int lengthOfLIS(vector<vector<int>> &envelopes)
    {
        int n = envelopes.size();

        //If envelopes is empty then answer will be 0. And if size = 1 then answer will be 1.
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
                //If envelopes[j] is smaller then envelopes[i], then it can be added to sequence
                if (envelopes[j][0] < envelopes[i][0] && envelopes[j][1] < envelopes[i][1])
                    dp[i] = max(dp[i], dp[j] + 1);
            }
        }

        /*
        // Now find max length in lookup table
        int ans = 1;
        for (int i = 0; i < n; i++) 
            ans = max(ans, dp[i]);

        return ans;
        */

        // Use STL function
        return *max_element(dp, dp + n);
    }

    int maxEnvelopes(vector<vector<int>> &envelopes)
    {
        sort(envelopes.begin(), envelopes.end());
        return lengthOfLIS(envelopes);
    }
};
