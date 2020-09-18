// https://practice.geeksforgeeks.org/problems/brackets-in-matrix-chain-multiplication/0/

/*
First Refer Matrix Chain Multiplication Problem. This problem is just an extension of MCM.

After solving MCM problem it is a cakewalk.
Just Store k in another table so that you will know the position where you should split.

Time Complexity - O(N^2),Space Complexity - O(N^2)
*/

#include <bits/stdc++.h>
using namespace std;
int n, a[100], dp[100][100], br[100][100];

void print(int i, int j)
{
    if (i == j)
    {
        cout << char(i + 'A' - 1);
        return;
    }
    cout << "(";
    print(i, br[i][j]);
    print(br[i][j] + 1, j);
    cout << ")";
}

int matrixChangeOrder(int i, int j)
{
    if (i == j)
        return 0;

    if (dp[i][j] != -1)
        return dp[i][j];

    int ans = INT_MAX;
    for (int k = i; k < j; k++)
    {
        int co = matrixChangeOrder(i, k) + matrixChangeOrder(k + 1, j) + a[i - 1] * a[k] * a[j];
        if (ans > co)
        {
            //Store k for putting brackets
            br[i][j] = k;
            ans = co;
        }
    }
    return dp[i][j] = ans;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        memset(dp, -1, sizeof(dp));
        for (int i = 0; i < n; i++)
            cin >> a[i];

        matrixChangeOrder(1, n - 1);
        print(1, n - 1);
        cout << "\n";
    }
    return 0;
}