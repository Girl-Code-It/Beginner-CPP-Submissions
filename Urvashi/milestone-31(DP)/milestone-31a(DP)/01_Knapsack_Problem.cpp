/* (https://www.geeksforgeeks.org/0-1-knapsack-problem-dp-10/)

Question:- We are given a knapsack and we have an array of items with price of each item and we have a max capacity of knapsack . We have to find the maximum profit after 
including the items in the knapsack.

Approach:-
1. As in question , we have to calculate the maximum profit(Optimum) , So we can apply dp here.
2. Initialisation:- Either in case of empty array of items or if capacity of knapsack is zero , there will be no profit or zero profit so we will initialise first row and 
first column by 0.
3. Then we will only make choice from the items whose weight is less than or equal to the weight of knapsack and everytime we will reduce our knapsack capacity after 
including the item .

*/

#include <iostream>
using namespace std;

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
    int T, N, capacity;
    cin >> T;

    while (T--)
    {
        cin >> N >> capacity;
        int value[N], weight[N];

        for (int i = 0; i < N; i++)
            cin >> value[i];

        for (int i = 0; i < N; i++)
            cin >> weight[i];

        cout << knapsack(value, weight, capacity, N) << "\n";
    }

    return 0;
