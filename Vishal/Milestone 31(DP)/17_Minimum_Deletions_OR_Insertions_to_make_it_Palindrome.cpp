// [Minimum Deletion] https://practice.geeksforgeeks.org/problems/minimum-deletitions/0

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int longestPalindromeSubsequence(string s1, string s2, int n, int m)
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
    //Minimum deletion
    return m - DP[n][m];
}

int main()
{
    string s1, s2;
    int t;
    cin >> t;

    while (t--)
    {
        cin >> s1;

        s2 = s1;
        reverse(s2.begin(), s2.end());

        cout << longestPalindromeSubsequence(s1, s2, s1.size(), s2.size()) << "\n";
    }

    return 0;
}
/******************************************************************************************************/

// [Minimum Insertion] https://leetcode.com/problems/minimum-insertion-steps-to-make-a-string-palindrome/

class Solution
{
public:
    int longestPalindromeSubsequence(string s1, string s2, int n, int m)
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
        //Minimum Insertion
        return m - DP[n][m];
    }

    int minInsertions(string s1)
    {
        string s2 = s1;
        reverse(s2.begin(), s2.end());

        return longestPalindromeSubsequence(s1, s2, s1.size(), s2.size());
    }
};