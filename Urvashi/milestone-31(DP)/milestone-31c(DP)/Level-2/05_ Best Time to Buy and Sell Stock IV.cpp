//  https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iv/

// Time Complexity - O(N*k)
// Space Complexity - O(k)

class Solution
{
public:
    int maxProfit(int k, vector<int> &prices)
    {
        if (k == 0)
            return 0;

        // When no of transactions(buy and sell) is greater than the positions then we have infinite               
        // transactions to perform.
        if (k >= prices.size() / 2)
        {
            int res = 0;
            for (int i = 1; i < prices.size(); ++i)
                res += max(prices[i] - prices[i - 1], 0);
            return res;
        }

        vector<int> buy(k, INT_MIN);
        vector<int> sell(k, 0);

        for (int price : prices)
        {
            for (int i = 0; i < k; ++i)
            {
                buy[i] = max(buy[i], (i > 0 ? sell[i - 1] : 0) - price);
                sell[i] = max(sell[i], buy[i] + price);
            }
        }
        
        return sell.back();
    }
};
