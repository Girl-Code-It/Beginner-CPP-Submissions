/* (https://www.geeksforgeeks.org/coin-change-dp-7/)

Question:- We are given a array of coins and a sum . We have to count the possible combinations of coins to achieve the given sum.

Approach:-
1. Initialisation:- If our sum is zero then we can achieve it by not choosing any coin(null) , if we dont have any coin then we can achieve only zero sum.
2. Code:- We will make choice only if our coin value is less than or equal to our given sum and to count all possible combinations we will add all possibilities 
either after including or excluding the current element to get given sum.

*/

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
