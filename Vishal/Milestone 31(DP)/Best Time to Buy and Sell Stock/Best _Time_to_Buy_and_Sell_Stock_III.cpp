// https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iii/

/*
Solution 1: Recursion + Memoization(Not a best solution, But you will get idea about optimize solution)
(Pass 201/214 test cases, Give TLE)

Three States :
1. Buy a share of stock
2. Sell a share of stock
3. Do nothing

Goal :
Buy at minimum possible price and sell at maximum posible price.

Time Complexity - O(K*N*N), Space Complexity - O(K*3*N) (here k = 2)
*/
class Solution
{
public:
    vector<vector<vector<int>>> memo;
    int solve(vector<int> &prices, int pos, int tran, bool isBought)
    {
        //Base Case
        if (pos >= n || t == 0)
            return 0;

        if (memo[isBought][tran][pos] != -1)
            return memo[isBought][tran][pos];

        int result = solve(prices, pos + 1, tran, isBought); //Skip(Do nothing)
        if (isBought)
            result = max(result, solve(prices, pos + 1, tran - 1, false) + prices[pos]); // Sell the share
        else
            result = max(result, solve(prices, pos + 1, tran, true) - prices[pos]); // Buy the share

        return result;
    }
    int maxProfit(vector<int> &prices)
    {
        memo.resize(2, vector<vector<int>>(3, vector<int>(n, -1)));
        return solve(prices, 0, 2, false);
    }
};

/* Solution 2:Using DP (More Optimized)

dp[k][i] = max(dp[k][i-1], prices[i] - prices[j] + dp[k-1][j-1]), j=[0..i-1]

For k transactions, on i-th day,if we don't trade then the profit is same as previous day dp[k, i-1];
and if we bought the share on j-th day where j=[0..i-1], then sell the share on i-th day then the profit is
prices[i] - prices[j] + dp[k-1, j-1].
Actually j can be i as well. When j is i, the one more extra item prices[i] - prices[j] + dp[k-1, j] = dp[k-1, i] looks like we just lose one chance of transaction.
*/
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int n = prices.size();
        if (n == 0)
            return 0;

        vector<vector<int>> dp(3, vector<int>(n, 0));
        for (int k = 1; k <= 2; k++)
        {
            int minPrice = prices[0];
            for (int i = 1; i < n; i++)
            {
                minPrice = min(minPrice, prices[i] - dp[k - 1][i - 1]);
                dp[k][i] = max(dp[k][i - 1], prices[i] - minPrice);
            }
        }
        return dp[2][n - 1];
    }
};

/*
Solution 3: Divide and Conquor Algorithm (Only for k=2)
I will add more explation later...

Time Complexity - O(N), Space Complexity - O(N)
*/
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int n = n;
        if (n <= 1)
            return 0;

        vector<int> left(n, 0), right(n, 0);

        // For 1st transactions
        int leftMin = prices[0]; //Also known as Best buying price
        for (int i = 1; i < n; ++i)
        {
            left[i] = max(left[i - 1], prices[i] - leftMin);
            leftMin = min(leftMin, prices[i]);
        }

        // For 2nd transactions
        int rightMax = prices[n - 1]; //also known as best selling price
        for (int i = n - 2; i >= 0; --i)
        {
            right[i] = max(right[i + 1], rightMax - prices[i]);
            rightMax = max(rightMax, prices[i]);
        }

        int Profit = right[0];
        for (int i = 1; i < n; i++)
            Profit = max(Profit, left[i - 1] + right[i]);

        return Profit;
    }
};