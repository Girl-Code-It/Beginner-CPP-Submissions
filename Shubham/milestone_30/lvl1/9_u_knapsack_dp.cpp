#include <bits/stdc++.h>

using namespace std;

int unbounded_knapsack(int wt[], int val[], int n, int W)
{
    int dp[n + 1][W + 1];

    //initialization

    for (int i = 0; i < n + 1; i++)
        dp[i][0] = 0;

    for (int i = 0; i < W + 1; i++)
        dp[0][i] = 0;

    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < W + 1; j++)
        {
            if (wt[i - 1] <= j)
            {
                int included = val[i-1] + dp[i][j - wt[i - 1]];
                int excluded = dp[i - 1][j];
                dp[i][j] = max(included, excluded);
            }
            else
                dp[i][j] = dp[i - 1][j];
        }
    }
    return dp[n][W];
}

int main()
{
    int wt[] = {1, 30};
    int val[] = {1, 50};
    int n = sizeof(wt) / sizeof(wt[0]);
    cout << unbounded_knapsack(wt, val, n, 100) << endl;
}