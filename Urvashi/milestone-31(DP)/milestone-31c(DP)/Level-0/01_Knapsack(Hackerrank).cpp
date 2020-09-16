// https://www.hackerrank.com/challenges/unbounded-knapsack/problem

#include<bits/stdc++.h>
using namespace std;

int sum(int *arr , int n , int k)
{
    int DP[n+1][k+1];

    for(int i = 0 ; i <= n ; i++)
        DP[i][0] = 0;
    
    for(int i = 0 ; i <= k ; i++)
        DP[0][i] = 0;
    
    for(int i = 1 ; i <= n ; i++)
    {
        for(int j = 1 ; j <= k ; j++ )
        {
            if (arr[i - 1] <= j)
                    DP[i][j] = max(arr[i-1] + DP[i][j - arr[i - 1]] , DP[i - 1][j]);
                else
                    DP[i][j] = DP[i - 1][j];
        }
    }
    return DP[n][k];
}

int main()
{
    int t , n , k;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        int arr[n];
        for(int i = 0 ; i < n ; i++)
            cin >> arr[i];
        cout << sum(arr , n , k) << "\n";

    }
}
