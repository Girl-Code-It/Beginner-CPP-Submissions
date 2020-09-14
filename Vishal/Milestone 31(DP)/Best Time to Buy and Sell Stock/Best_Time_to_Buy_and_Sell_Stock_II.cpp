// https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/

/*
Solution: Using Peak Valley Graph

Max Profit will be sum of sub-profits.
we will get max sub-profit if we buy when price is low and sell when price is max.

Time Complexity - O(N), Space Complexity - O(1)
*/
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int i = 0, buy, sell, profit = 0, N = prices.size() - 1;
        while (i < N)
        {
            //Searching for Valley (The day at which you will ready to buy)
            while (i < N && prices[i + 1] <= prices[i])
                i++;

            buy = prices[i];
            //Searching for Peak (The day at which you will ready to sell)
            while (i < N && prices[i + 1] > prices[i])
                i++;

            sell = prices[i];
            profit += sell - buy;
        }
        return profit;
    }
};

//Solution 2:
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int profit = 0, n = prices.size();
        for (int i = 1; i < n; i++)
            if (prices[i] > prices[i - 1])
                profit += prices[i] - prices[i - 1];

        return profit;
    }
};