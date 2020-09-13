/* (https://www.geeksforgeeks.org/count-of-subsets-with-sum-equal-to-x/)

Question:- Given an array arr[] of length N and an integer sum, the task is to find the number of subsets with sum equal to sum. 

Approach:-
1. Initialisation:- If value of sum is 0 then we can use null array so will put 1 possibility , if our array is empty then can't achieve our given sum so fill 0.
2. Code:- We will make choice from elements which are less than or equal to our given sum and will add to get all possible subsets after including or not including 
the given element to get the given sum .

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
    int N;

    cin >> N;
    int arr[N], sum;

    for (int i = 0; i < N; i++)
        cin >> arr[i];

    cin >> sum;

    cout << countSubset(arr, sum, N)<< "\n";
    return 0;
}
