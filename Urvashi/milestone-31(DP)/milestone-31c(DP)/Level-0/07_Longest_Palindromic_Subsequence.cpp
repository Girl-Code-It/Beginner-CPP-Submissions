// https://leetcode.com/problems/longest-palindromic-subsequence/

class Solution
{
public:
    int longestCommonSubsequence(string s1, string s2, int n, int m)
    {
        int DP[n + 1][m + 1];

        for (int i = 0; i <= n; i++)
            DP[i][0] = 0;

        for (int i = 0; i <= m; i++)
            DP[0][i] = 0;

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                if (s1[i - 1] == s2[j - 1])
                    DP[i][j] = 1 + DP[i - 1][j - 1];
                else
                    DP[i][j] = max(DP[i - 1][j], DP[i][j - 1]);
            }
        }

        return DP[n][m];
    }
    
    int longestPalindromeSubseq(string s)
    {
        string s2 = s;
        reverse(s2.begin(), s2.end());

        return longestCommonSubsequence(s, s2, s.size(), s2.size());
    }
};
