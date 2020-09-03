class Solution
{
public:
    bool isSubset(vector<int> &nums, int sum, int n)
    {
        bool DP[n + 1][sum + 1];

        for (int i = 0; i <= n; i++)
            DP[i][0] = true;

        for (int i = 1; i <= sum; i++)
            DP[0][i] = false;

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= sum; j++)
            {
                if (nums[i - 1] <= j)
                    DP[i][j] = DP[i - 1][j - nums[i - 1]] || DP[i - 1][j];
                else
                    DP[i][j] = DP[i - 1][j];
            }
        }
        return DP[n][sum];
    }
    bool canPartition(vector<int> &nums)
    {
        int n = nums.size() , sum = 0;

        for (int i = 0; i < n; i++)  
            sum += nums[i];

        if (sum & 1)
            return false;
        
        return isSubset(nums, sum/2, n);
    }
};