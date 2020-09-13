#include <iostream>
using namespace std;

//Solution 1 : Using Recursion
int knapsack(int value[], int weight[], int capacity, int N)
{
    if (N == 0 || capacity == 0)
        return 0;

    if (weight[N - 1] <= capacity)
        return max(value[N - 1] + knapsack(value, weight, capacity - weight[N - 1], N - 1), knapsack(value, weight, capacity, N - 1));
    else
        return knapsack(value, weight, capacity, N - 1);
}

//Solution 2 : Using Recursion + Memoization
int V[101][1001];

int knapsack(int value[], int weight[], int capacity, int N)
{
    if (N == 0 || capacity == 0)
        return 0;

    if (V[N][capacity] != -1)
        return V[N][capacity];

    if (weight[N - 1] <= capacity)
        return V[N][capacity] = max(value[N - 1] + knapsack(value, weight, capacity - weight[N - 1], N - 1), knapsack(value, weight, capacity, N - 1));
    else
        return V[N][capacity] = knapsack(value, weight, capacity, N - 1);
}

//Solution 3 : DP
int knapsack(int value[], int weight[], int capacity, int N)
{
    int DP[N + 1][capacity + 1];

    for (int i = 0; i <= N; i++)
    {
        for (int j = 0; j <= capacity; j++)
        {
            if (i == 0 || j == 0)
                DP[i][j] = 0;

            else if (weight[i - 1] <= j)
                DP[i][j] = max(value[i - 1] + DP[i-1][j-weight[i-1]],DP[i-1][j]);
            else
                DP[i][j] = DP[i-1][j];
        }
    }
    return DP[N][capacity];
}

int main()
{
    int T, N, capacity, ans;
    cin >> T;

    //For Solution 2
    for (int i = 0; i < 101; i++)
        for (int j = 0; j < 1001; j++)
            V[i][j] = -1;

    while (T--)
    {
        cin >> N >> capacity;
        int value[N], weight[N];

        for (int i = 0; i < N; i++)
            cin >> value[i];

        for (int i = 0; i < N; i++)
            cin >> weight[i];

        ans = knapsack(value, weight, capacity, N);

        cout << ans << "\n";
    }

    return 0;
}
