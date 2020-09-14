// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

/*
Simple Solution : You will get maximum profit when you buy at minimum price and sell at maximum price.
Condition : You have to buy first. You cant sell before buying.

So just if you want to sell on ith day then you will get maxmimum profit iff you had buy the stock at 
minimum price from day 1 to i.

Time Complexity - O(N), Space Complexity - O(1)
*/

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int minprice = INT_MAX;
        int maxprofit = 0;
        for (int i = 0; i < prices.size(); i++)
        {
            if (prices[i] < minprice)
                minprice = prices[i];
            else if (prices[i] - minprice > maxprofit)
                maxprofit = prices[i] - minprice;
        }
        return maxprofit;
    }
};
