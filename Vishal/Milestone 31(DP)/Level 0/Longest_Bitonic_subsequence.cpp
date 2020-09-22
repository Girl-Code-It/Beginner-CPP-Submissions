// https://practice.geeksforgeeks.org/problems/longest-bitonic-subsequence/0

// Time complexity - O(N^2) Space Complexity - O(N)

#include<iostream>
using namespace  std;

int longestBitonicSubseque(int arr[], int n)
{
    if (n <= 1)
        return n;

    //Find Longest Increasing Subsequence From left
    int left[n];
    for (int i = 0; i < n; i++)
    {
        left[i] = 1;
        for (int j = 0; j < i; j++)
        {
            if (arr[j] < arr[i])
                left[i] = max(left[i], left[j] + 1);
        }
    }
    
    //Find Longest Increasing Subsequence From right
    int right[n];
    for (int i = n-1; i >= 0; i--)
    {
        right[i] = 1;
        for (int j = n-1; j > i; j--)
        {
            if (arr[j] < arr[i])
                right[i] = max(right[i], right[j] + 1);
        } 
    }

    //Longest Bitonic Subsequence = LIS from Left + LIS from Right - 1
    int ans = 0;
    for (int i = 0; i < n; i++)
        ans = max(ans, left[i] + right[i] - 1);

    return ans;
}

int main()
{
    int t, n;
    cin >> n;

    while (t--)
    {
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        
        cout << longestBitonicSubseque(arr, n) << "\n";
    }
    
    return 0;
}
