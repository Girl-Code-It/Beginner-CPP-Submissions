#include <iostream>
using namespace std;

int countSubset(int arr[], int sum, int N)
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
                DP[i][j] = DP[i - 1][j - arr[i - 1]] + DP[i - 1][j];
            else
                DP[i][j] = DP[i - 1][j];
        }
    }
    return DP[N][sum];
}

int main()
{
    int N, sum = 0, diff;

    cin >> N;
    int arr[N];

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    cin >> diff;

    cout << countSubset(arr, (sum + diff)/ 2, N) << "\n";

    return 0;
}