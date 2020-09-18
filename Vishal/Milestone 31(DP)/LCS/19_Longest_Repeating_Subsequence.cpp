// https://practice.geeksforgeeks.org/problems/longest-repeating-subsequence/0

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