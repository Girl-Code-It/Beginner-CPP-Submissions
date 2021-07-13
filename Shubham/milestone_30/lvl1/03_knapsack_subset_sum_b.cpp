#include<bits/stdc++.h>

using namespace std;

bool isSubsetSetPossible(int A[], int sum, int n)
{
    bool dp[n + 1][sum + 1];
    
    //initialization phase
    for(int i = 0; i < n + 1; i++)
    {
        for(int j = 0; j < sum + 1; j++)
        {
            if(i == 0 and j == 0)
                dp[i][j] = true;
            else if(j == 0)
                dp[i][j] = true;
            else if(i == 0)
                dp[i][j] = false;
        }
    }

    //choice diagram code

    for(int i = 1; i < n + 1; i++)
    {
        for(int j = 1; j < sum + 1; j++)
        {
            if(A[i-1] <= j)
                dp[i][j] = dp[i-1][j-A[i-1]] || dp[i-1][j];
            
            else
                dp[i][j] = dp[i-1][j];
        }
    }

    return dp[n][sum];
}

int main()
{
    int A[] = {3, 4, 5, 2};
    if(isSubsetSetPossible(A, 6, 4))
        cout << "Yes, It's possible :)" << endl;
    else
        cout << "It's not possible :(" << endl;
}