/* (https://leetcode.com/problems/coin-change/)

Question:- You are given coins of different denominations and a total amount of money amount. 
Write a function to compute the fewest number of coins that you need to make up that amount.
If that amount of money cannot be made up by any combination of the coins, return -1.
 
Approach:- 
In this Question , we have to initialise our second row of dp matrix also , we have to fill it with the no we get after dividing the given amount with no of coins if they are 
fully divisible otherwise fill it with infinity.

Why to do this?
Because in second row we will have only one coin in our coin array if after taking that coin we can achieve our amount then good we will include it any no of time we need but 
if amount is not divisibel by the given coin then we need infinite no of coins to achieve it (in reality it is not possible to achieve that amount but we are taking infinity 
in maths for calculation purpose).

*/

class Solution
{
public:
    int coinChange(vector<int> &coins, int amount)
    {
        int N = coins.size();

        int DP[N + 1][amount + 1];
        
        // When our given amount is zero then we can't achieve it even if we have only one coin.
        for (int i = 0; i <= N; i++)
            DP[i][0] = 0;
        
        // If we have empty array of coins then we need infinite no of coins to achieve given amount.
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
        // if we need infinite coins then it is not possible to achieve the given amount so in that case we have to return -1.
        return DP[N][amount] == INT_MAX - 1 ? -1 : DP[N][amount];
    }
};
