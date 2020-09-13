/* (https://practice.geeksforgeeks.org/problems/longest-repeating-subsequence/0)

Question:- Given a string str, find length of the longest repeating subsequence such that the two subsequence don’t have same string character at same position,
i.e., any i’th character in the two subsequences shouldn’t have the same index in the original string.

Approach:-
We will apply LCS using below steps b/w string and itself string and will check simultaneously that if the letters are same and index is not same then it will be a 
repeating letter and it will form a repeated string if t will get all the remaining characters repeated.

1. initialisation:- when any of the two strings is empty then empty subsequence will be common whose size will be zero.
2. Code:- If letters at particular index of the matrix is equal then will include that length of longest subsequence will be one greater than the length at one minus that index
else will not include that length and length will be the maximum of one less in the index.

*/

#include <iostream>
#include <string>
using namespace std;

int longestRepeatingSubsequence(string text1, string text2, int n, int m)
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
            if (text1[i - 1] == text2[j - 1] & i != j)
                DP[i][j] = 1 + DP[i - 1][j - 1];
            else
                DP[i][j] = max(DP[i - 1][j], DP[i][j - 1]);
        }
    }

    return DP[n][m];
}

int main()
{
    int t, n;
    string X;
    cin >> t;

    while (t--)
    {
        cin >> n;

        cin >> X;

        cout << longestRepeatingSubsequence(X, X, n, n) << "\n";
    }

    return 0;
}
