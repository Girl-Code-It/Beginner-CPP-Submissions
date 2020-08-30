/* (https://www.geeksforgeeks.org/subset-sum-problem-dp-25/)

Question:- Given a set of non-negative integers, and a value sum, determine if there is a subset of the given set with sum equal to given sum.

Approach:-
1. Initialisation:- If value of sum is 0 then we can use null array so will put true , if our array is empty then can't achieve our given sum so fill false.
2. Code:- We will make choice from elements which are less than or equal to our given sum and will take bit or to get true if after including or not including 
the given element we are getting the sum .

*/

#include <iostream>
using namespace std;

bool isSubset(int arr[], int sum, int N)
{
    bool DP[N + 1][sum + 1];
    for (int i = 0; i <= N; i++) 
        DP[i][0] = true; 
  
    for (int i = 1; i <= sum; i++) 
        DP[0][i] = false;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= sum; j++)
        {
            if (arr[i - 1] <= j)
                DP[i][j] = DP[i-1][j-arr[i-1]] || DP[i-1][j];
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
        int arr[N], sum = 0;
        
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        if(sum & 1)
            cout << "NO\n";
        else
            isSubset(arr,sum/2, N) ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}

*/
