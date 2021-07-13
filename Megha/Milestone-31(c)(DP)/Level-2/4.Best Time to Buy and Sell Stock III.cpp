//https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iii/submissions/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int n = prices.size();
        
        // if array is empty then we cant have any profit.
        if(n == 0)
            return 0;
        
        vector<int> left(n),right(n);
        
        //Fill 1st transaction (LEFT)
        int leftMin = prices[0];
        // In this , we are traversing from left to right so everytime left maximum profit can be the               
        // maximum between latest profit and the profit we will get after selling at this position.
        for(int i = 1; i < n; i++)
        {
            left[i] = max(left[i-1] , prices[i] - leftMin);
            leftMin = min(leftMin , prices[i]);
        }
        
        //Fill 2nd transaction (RIGHT)
        int rightMax = prices[n-1];
        // In this , we are traversing from right to left so everytime left maximum profit can be the               
        // maximum between latest profit and the profit we will get after buying at this position.
        for(int i = n-2; i >= 0; i--)
        {
            right[i] = max(right[i+1] , rightMax - prices[i]);
            rightMax = max(rightMax , prices[i]);
        }
        
        //Find the max-profit value
        int profit = right[0];
        for(int i=1;i<n;++i)
            profit = max(profit,left[i-1]+right[i]);
        
        return profit;
    }
};
