// https://practice.geeksforgeeks.org/problems/stickler-theif/0

// It is the same problem. You can search house robber leetcode.
// Time Complexity - O(N), Space Complexity - O(N)

#include <iostream>
#include <vector>
using namespace std;

int rob(vector<int> &nums)
{
    int n = nums.size();

    // There is no house in a street
    if (n == 0)
        return 0;

    // There is 1 house in a street
    if (n == 1)
        return nums[0];

    // If there is two house i will rob the house which have more money
    if (n == 2)
        return max(nums[0], nums[1]);

    int dp[n];
    dp[0] = nums[0], dp[1] = max(nums[0], nums[1]);
    for (int i = 2; i < n; i++)
        dp[i] = max(nums[i] + dp[i - 2], dp[i - 1]);

    return dp[n - 1];
}

int main()
{
    int t, n;
    cin >> t;

    while (t--)
    {
        cin >> n;
        vector<int> nums(n);

        for (int i = 0; i < n; i++)
            cin >> nums[i];

        cout << rob(nums) << "\n";
    }
}