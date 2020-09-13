/* (https://leetcode.com/problems/longest-palindromic-subsequence/)

Question:- Given a string s, find the longest palindromic subsequence's length in s. You may assume that the maximum length of s is 1000.

Approach:-
1. initialisation:- when any of the two strings is empty then empty subsequence will be common whose size will be zero.
2. Code:- If letters at particular index of the matrix is equal then will include that length of longest subsequence will be one greater than the length at one minus that index
else will not include that length and length will be the maximum of one less in the index.

Using these steps we will get longest common subsequence.

But for longest common subsequence we need two strings , so to get longest palindromic subsequence, we need the LCS b/w the string and its reverse .

*/

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
