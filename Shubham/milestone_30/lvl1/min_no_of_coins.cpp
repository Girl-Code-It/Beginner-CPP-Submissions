#include<bits/stdc++.h>

using namespace std;

int min_no_of_coins(int A[], int n, int sum)
{
    long int dp[n + 1][sum + 1];

    //initialization

    for(int i = 1; i < n + 1; i++)
        dp[i][0] = 0;

    for(int j = 0; j < sum + 1; j++)
        dp[0][j] = INT_MAX - 1;

    for(int j = 1; j < sum + 1; j++)
    {
        if(j % A[0] == 0)
            dp[1][j] = j / A[0];
        else
            dp[1][j] = INT_MAX - 1;
    }

    for(int i = 2; i < n + 1; i++)
    {
        for(int j = 1; j < sum + 1; j++)
        {
            if(A[i - 1] <= j)
            {
                int included = 1 + dp[i][j - A[i - 1]];
                int excluded = dp[i - 1][j];

                dp[i][j] = min(included, excluded);
            }
            else
                dp[i][j] = dp[i - 1][j];
        }
    }

    return dp[n][sum];
}

int main()
{
    int A[] = {2, 3, 4};
    int sum = 6;

    cout << min_no_of_coins(A, 3, sum) << endl;
}