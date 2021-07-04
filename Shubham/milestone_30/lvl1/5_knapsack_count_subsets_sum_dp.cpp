#include <bits/stdc++.h>

using namespace std;

int count_subsets_sum(int A[], int sum, int n)
{
    int dp[n + 1][sum + 1];

    //initialization

    for (int i = 0; i < sum + 1; i++)
        dp[0][i] = 0;

    for (int i = 0; i < n + 1; i++)
        dp[i][0] = 1;

    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < sum + 1; j++)
        {

            if (A[i - 1] <= j)
            {
                int included = dp[i - 1][j - A[i - 1]];
                int excluded = dp[i - 1][j];
                dp[i][j] = included + excluded;
            }
            else
                dp[i][j] = dp[i-1][j];
        }
    }
    return dp[n][sum];
}

int main()
{
    int A[] = {1, 1, 2, 3};
    cout << count_subsets_sum(A, 1, 4) << endl;
}