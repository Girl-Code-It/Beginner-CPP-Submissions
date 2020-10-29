// https://www.hackerrank.com/challenges/unbounded-knapsack/problem

/*
 First Refer 0-1 Knapsack Problem.

 Two variation from 0-1 knapsack problem....

 1. Now you have to find nearest target sum, means if you didn't get target sum so find just smaller possible sum.
 2. You can use any element more then one times.

 Time complexity - O(N*k), Space complexity - O(N*k)
*/
#include <iostream>
using namespace std;

int knapsack(int arr[], int k, int N)
{
    int DP[N + 1][k + 1];

    //Code for Unbounded Knapsack
    for (int i = 0; i <= N; i++)
    {
        for (int j = 0; j <= k; j++)
        {
            if (j != 0 && i == 0)
                DP[i][j] = 0;

            else if (j == 0)
                DP[i][j] = 1;

            else if (arr[i - 1] <= j)
                DP[i][j] = DP[i][j - arr[i - 1]] || DP[i - 1][j];
            else
                DP[i][j] = DP[i - 1][j];
        }
    }

    //Twist, if target sum is not found, find nearest sum
    int i = k;
    while (!DP[N][i])
        i--;
        
    return i;
}

int main()
{
    int T, N, k;
    cin >> T;

    while (T--)
    {
        cin >> N >> k;
        int arr[N];

        for (int i = 0; i < N; i++)
            cin >> arr[i];

        cout << knapsack(arr, k, N) << "\n";
    }

    return 0;
}
