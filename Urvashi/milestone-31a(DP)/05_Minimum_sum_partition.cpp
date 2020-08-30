/* (https://www.geeksforgeeks.org/partition-a-set-into-two-subsets-such-that-the-difference-of-subset-sums-is-minimum/)

Question:- Given a set of integers, the task is to divide it into two sets S1 and S2 such that the absolute difference between their sums is minimum.

Approach:-
1. Initialisation:- If given sum is zero then we have one possibility which is null array , if array is empty then we can only achieve 0 sum .
2. Code:- We will make choice only if the element is less than or equal to the given sum and we will take bit or to get true if either after including or excluding 
the current element we get our sum .

The difference between the subset sum will be minimum only if one subset sum is from left of the mid of the dp table and other is from right of it and the difference 
will be [(given sum - i) - i] as i is the particular subset sum at which the difference will be minimum and subtracting it from given sum will give us second subset sum . 

In our fxn minimumSumPartition , we are using sum as half of the given sum that's why we did 2*sum in the end for calculating the diff.

*/

#include <iostream>
using namespace std;

int minimumSumPartition(int arr[], int sum, int N)
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
    
    //i will check in last row from right where i get first true subset sum....it will give my answer

    int i = sum;

    while(! DP[N][i])
        i--;
    
    return 2*sum - 2*i;
    
}

int main()
{
    int T, N, ans;
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
        
       ans = minimumSumPartition(arr, sum/2, N);

       if (sum & 1)
            ans++;

        cout << ans << "\n";
       
    }

    return 0;
}
