/* (https://leetcode.com/problems/longest-common-subsequence/)

Question:- Given two strings text1 and text2, return the length of their longest common subsequence.

Approach 1:- 
1. Base Case:- when any of the two strings is empty then empty subsequence will be common whose size will be zero.
2. Recursive calls:- Starting from whole length of both strings everytime we will check if both letters are equal , if yes then adding that in length and recurse
for shorter length, if not equal then we will take maximum of the lengths after discarding the uncommon letter from both strings.

Approach 2:- Same as Approach 1 , only we are taking a DP matrix initialised with -1 and storing the length of common subsequence for particular size of both strings
in that so that we don't have to calculate subsequence for that particular sizes again and hence the time complexity will reduce that's why called memoized version as 
time complexity is reduced using extra memory.

Approach 3:- Same as Approach 1 only converted the base case to initialisation and recursive calls to iterative version.
1. initialisation:- when any of the two strings is empty then empty subsequence will be common whose size will be zero.
2. Code:- If letters at particular index of the matrix is equal then will include that length of longest subsequence will be one greater than the length at one minus that index
else will not include that length and length will be the maximum of one less in the index.

*/

//  Solution 1: Using Recursion (It will give TLE)
class Solution
{
public:
    int countLength(string text1, string text2, int n, int m)
    {
        if (n == 0 || m == 0)
            return 0;

        if (text1[n - 1] == text2[m - 1])
            return 1 + countLength(text1, text2, n - 1, m - 1);

        return max(countLength(text1, text2, n, m - 1), countLength(text1, text2, n - 1, m));
    }

    int longestCommonSubsequence(string text1, string text2)
    {
        return countLength(text1, text2, text1.size(), text2.size());
    }
};

// Solution 2: Using Recursion + Memoization
class Solution
{
public:
    int t[1001][1001];
    int countLength(string text1, string text2, int n, int m)
    {
        if (n == 0 || m == 0)
            return 0;

        if (t[n][m] != -1)
            return t[n][m];

        if (text1[n - 1] == text2[m - 1])
            return t[n][m] = 1 + countLength(text1, text2, n - 1, m - 1);

        return t[n][m] = max(countLength(text1, text2, n, m - 1), countLength(text1, text2, n - 1, m));
    }

    int longestCommonSubsequence(string text1, string text2)
    {
        memset(t, -1, sizeof(t));

        return countLength(text1, text2, text1.size(), text2.size());
    }
};

// Solution 3: DP(Bottom Up)
class Solution
{
public:
    int countLength(string text1, string text2, int n, int m)
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
                if (text1[i - 1] == text2[j - 1])
                    DP[i][j] = 1 + DP[i-1][j-1];
                else
                    DP[i][j] = max(DP[i-1][j], DP[i][j-1]);
            }
        }

        return DP[n][m];
    }

    int longestCommonSubsequence(string text1, string text2)
    {
        return countLength(text1, text2, text1.size(), text2.size());
    }
};
