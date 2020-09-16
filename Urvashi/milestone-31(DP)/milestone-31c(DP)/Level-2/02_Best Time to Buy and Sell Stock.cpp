// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        
        // if there is only one day then he can only buy and will have no profit as he can't sell 
        // and in case of zero days also the profit will be zero.
        if(n <= 1) 
            return 0;
        
        int sum = 0, max_profit = 0;
        
        for(int i = 1; i < n; i++)
        {
            // As we first have to buy then sell so to get maximum profit, we have to find diff of every               
            // day price and have to add it in sum to get the maximum sum.
            int change = prices[i] - prices[i - 1];
            sum = max(sum + change, change);
            max_profit = max(max_profit, sum);
        }
        
        return max_profit;
    }
};
