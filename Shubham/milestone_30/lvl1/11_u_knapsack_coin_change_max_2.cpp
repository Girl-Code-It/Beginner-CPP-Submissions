#include<bits/stdc++.h>

using namespace std;

int coin_change_max(int A[], int n, int sum)
{
    int dp[n + 1][sum + 1];

    //initialization

    for(int j = 0; j < sum + 1; j++)
        dp[0][j] = 0;

    for(int i = 0; i < n + 1; i++)
        dp[i][0] = 1;

    for(int i = 1; i < n + 1; i++)
    {
        for(int j = 1; j < sum + 1; j++)
        {
            if(A[i - 1] <= j)
            {
                int included = dp[i][j - A[i - 1]];
                int excluded = dp[i - 1][j];

                dp[i][j] = included + excluded;
            }
            else
                dp[i][j] = dp[i - 1][j];
        }
    }
    return dp[n][sum];
}

int main()
{
    int A[] = {1, 2, 3};
    int sum = 5;

    cout << coin_change_max(A, 3, 5) << endl;
}