// https://leetcode.com/problems/perfect-squares/

// Time Complexity - O(N^2), Space Cpmplexity - O(N)
class Solution
{
public:
    int numSquares(int n)
    {
        vector<int> dp(n + 1, n);
        dp[0] = 0, dp[1] = 1;

        int Sq = (int)sqrt(n);
        if (Sq * Sq == n)
            return 1;

        for (int i = 2; i <= n; i++)
        {
            for (int j = 1; j * j <= i; j++)
                dp[i] = min(dp[i], dp[i - j * j] + 1);
        }
        return dp[n];
    }
};