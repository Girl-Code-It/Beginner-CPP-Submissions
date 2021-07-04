#include <bits/stdc++.h>

using namespace std;

bool isSubsetSumPossible(int A[], int sum, int n)
{
    bool dp[n + 1][sum + 1];

    //initialization phase
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < sum + 1; j++)
        {
            if (i == 0 and j == 0)
                dp[i][j] = true;
            else if (j == 0)
                dp[i][j] = true;
            else if (i == 0)
                dp[i][j] = false;
        }
    }

    //choice diagram code

    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < sum + 1; j++)
        {
            if (A[i - 1] <= j)
                dp[i][j] = dp[i - 1][j - A[i - 1]] || dp[i - 1][j];

            else
                dp[i][j] = dp[i - 1][j];
        }
    }

    return dp[n][sum];
}

bool isEqualSumPartitionPossible(int A[], int n)
{
    int sum = 0;
    for(int i = 0; i < n; i++)
        sum += A[i];
    
    if(sum%2 != 0)
        return false;
    
    return isSubsetSumPossible(A, sum/2, n);
}

int main()
{
    int A[] = {1, 5, 11, 5, 1};

    if(isEqualSumPartitionPossible(A, 5))
        cout << "Yes, It's Possible :)" << endl;
    else
        cout << "It's not Possible :(" << endl;
}