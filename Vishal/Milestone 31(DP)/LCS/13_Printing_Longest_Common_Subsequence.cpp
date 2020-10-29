// https://www.geeksforgeeks.org/printing-longest-common-subsequence/

#include <iostream>
#include <string>
using namespace std;

string longestCommonSubsequence(string X, string Y, int m, int n)
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

    string result = "";
    
    int i = m, j = n;

    while (i > 0 && j > 0)
    {
        if (X[i - 1] == Y[j - 1])
        {
            result = X[i - 1] + result;
            i--;
            j--;
        }
        else
        {
            if (DP[i - 1][j] > DP[i][j - 1])
                i--;
            else
                j--;
        }
    }

   return result;
}

int main()
{
    int m, n;
    string X, Y;

    cin >> m >> n;
    cin >> X >> Y;

   cout << longestCommonSubsequence(X, Y, m, n) << "\n";

    return 0;
}