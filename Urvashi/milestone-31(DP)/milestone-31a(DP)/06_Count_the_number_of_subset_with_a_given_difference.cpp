/*
Question:- We are given an array , we have to count the total no of subsets whose sum gives us difference equal to given diff .

Approach:- 
As we know sum of our two subsets should be equal to the sum of array elements and their diff should be equal to the given diff so after solving these two equations
we will get a particular value of subset sum which we will take in our countSubset fxn and will find this partiular sum.
1. Initialisation:- If sum is zero then there is one possibility which is when array is null , if given array is empty then we can only achieve 0 sum.
2. Code:- We will make choice only if the given element is less than or equal to the given sum and for counting all the possible subsets we will add all the possibilities 
either after including or excluding the given element .

*/

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
