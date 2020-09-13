class Solution
{
public:
    int coinChange(vector<int> &coins, int amount)
    {
        int N = coins.size();

        int DP[N + 1][amount + 1];

        for (int i = 0; i <= N; i++)
            DP[i][0] = 0;

        for (int i = 1; i <= amount; i++)
            DP[0][i] = INT_MAX - 1;

        for (int i = 1; i <= N; i++)
        {
            for (int j = 1; j <= amount; j++)
            {
                if (coins[i - 1] <= j)
                    DP[i][j] = min(1 + DP[i][j - coins[i - 1]], DP[i - 1][j]);
                else
                    DP[i][j] = DP[i - 1][j];
            }
        }
        return DP[N][amount] == INT_MAX - 1 ? -1 : DP[N][amount];
    }
};