#include <iostream>
using namespace std;

int coinChange(int arr[], int sum, int N)
{
    int DP[N + 1][sum + 1];

    for (int i = 0; i <= N; i++) 
        DP[i][0] = 1; 
  
    for (int i = 1; i <= sum; i++) 
        DP[0][i] = 0;

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= sum; j++)
        {
            if (arr[i - 1] <= j)
                DP[i][j] = DP[i][j-arr[i-1]] + DP[i-1][j];
            else
                DP[i][j] = DP[i-1][j];
        }
    }
    return DP[N][sum];
}

int main()
{
    int T, N;
    cin >> T;

    while (T--)
    {
        cin >> N;
        int arr[N], Cents;
        
        for (int i = 0; i < N; i++)
            cin >> arr[i];

        cin >> Cents;

        cout << coinChange(arr, Cents, N) << "\n";
    }

    return 0;
}