// https://www.hackerrank.com/challenges/dynamic-programming-classics-the-longest-common-subsequence/problem

#include <bits/stdc++.h>
using namespace std;

void longestCommonSubsequence(int* X, int* Y, int m, int n)
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

    vector<int>result;
    
    int i = m, j = n;

    while (i > 0 && j > 0)
    {
        if (X[i - 1] == Y[j - 1])
        {
            result.push_back(X[i - 1]) ;
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
    reverse(result.begin(), result.end());
    for(auto i : result)
    cout<<i<<" ";
}

int main()
{
    int m, n;

    cin >> n >> m;
    int X[n] ;
    int Y[m];
    for(int i = 0 ; i < n ; i++)
        cin >> X[i];
    for(int i = 0 ; i < m ; i++)
        cin >> Y[i];

   longestCommonSubsequence(X, Y, n,m) ;

    return 0;
}
