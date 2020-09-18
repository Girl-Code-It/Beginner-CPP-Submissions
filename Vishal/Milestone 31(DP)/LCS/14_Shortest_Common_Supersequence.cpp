// https://practice.geeksforgeeks.org/problems/shortest-common-supersequence/0

#include <iostream>
#include <string>
using namespace std;

int shortestCommonSupersequence(string X, string Y, int m, int n)
{
    int DP[m + 1][n + 1];

    for (int i = 0; i <= m; i++)
        DP[i][0] = 0;

    for (int i = 0; i <= n; i++)
        DP[0][i] = 0;

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (X[i - 1] == Y[j - 1])
                DP[i][j] = 1 + DP[i - 1][j - 1];
            else
                DP[i][j] = max(DP[i-1][j], DP[i][j-1]);
        }
    }
    return m + n - DP[m][n];
}

int main()
{
    int t;
    string X, Y;
    cin >> t;

    while (t--)
    {
        cin >> X >> Y;
        cout << shortestCommonSupersequence(X, Y, X.size(), Y.size()) << "\n";
    }

    return 0;
}