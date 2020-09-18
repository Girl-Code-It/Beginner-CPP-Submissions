// https://practice.geeksforgeeks.org/problems/maximum-sum-increasing-subsequence/0

/*
 First refer longest increasing subsequence problem.

 Here you have to find max sum. so just change 1 by arr[i].

 Time Complexity - O(N^2), Space Complexity - O(N) 
*/

#include <iostream>
using namespace std;

int maxSumIncreasingSubseq(int arr[], int n)
{
    int dp[n];
    for (int i = 0; i < n; i++)
    {
        //Initialize
        dp[i] = arr[i];
        for (int j = 0; j < i; j++)
        {
            //If it form a sequence then it CAN be added
            if (arr[j] < arr[i])
                dp[i] = max(dp[i], dp[j] + arr[i]);
        }
    }
    
    //Return the max sum from the look up table
    int ans = dp[0];
    for (int i = 0; i < n; i++)
        ans = max(ans, dp[i]);

    return ans; 
}

int main()
{
    int t, n;

    cin >> t;

    while (t--)
    {
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++)
            cin >> arr[i];
        
        cout << maxSumIncreasingSubseq(arr, n) << "\n";
    }

    return 0;
}