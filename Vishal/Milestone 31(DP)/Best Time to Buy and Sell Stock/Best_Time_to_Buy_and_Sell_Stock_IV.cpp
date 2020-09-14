// https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iv/submissions/

// Must Refer all Previous Question of this series of Problems

class Solution
{
public:
    int maxProfit(int k, vector<int> &prices)
    {
        if (k == 0)
            return 0;

        //Solution of Best Time To Buy and Sell ll(2*K > N => K is infinite)
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