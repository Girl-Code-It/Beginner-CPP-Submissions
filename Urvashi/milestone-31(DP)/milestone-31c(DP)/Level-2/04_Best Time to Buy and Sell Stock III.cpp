//  https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iii/

// Time complexity - O(K*N*N)
// Space Complexity - O(K*3*N) (here k = 2)

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

/*********************************************************************************************************************************/


// Time complexity - O(K*N*N)
// Space Complexity - O(K*3*N) (here k = 2)

class Solution {
public:
    /* pos->current position
       t->transactions done
       bought->If current stock is bought
    */
    
    vector<vector<vector<int>>>DP;
    int recursion(vector<int>&prices , int pos , int t , int bought)
    {
        // if we are going out of bound or we have done no transaction then profit will be zero.
        if(pos >= prices.size() || t == 0)
            return 0;
        
        // if value is already processed.
        if(DP[bought][t][pos] != -1)
            return DP[bought][t][pos];
        
        // At any position , we can have three choices , either we can that position means not to buy and         
        // not to sell or we can buy or we can sell at that position.
        
        // SKIP(just move on to next position without doing anything)
        int result = recursion(prices,pos+1,t,bought);    
        
        // SELL(if we have bought a stock before than we can sell at this position and if we will sell 
        // than we will do one transaction and our transaction will reduce by 1 and bought state will be 
        // false again and after selling at the current position we will include that amount in our result).
        if(bought)
            result = max(result,recursion(prices,pos+1,t-1,false)+prices[pos]);
        
        // BUY(if bought state is false then we dont have any stock pending whic we can sell , so at this 
        // position we can buy our new stock , so we will make the bought state true and move to the next 
        // position after decreasing the amount from the result as we have to pay money to but stock.)
        else
            result = max(result,recursion(prices,pos+1,t,true)-prices[pos]);
        
        DP[bought][t][pos] = result;
        return result;
        
    }
        
    int maxProfit(vector<int>& prices) {
        DP.resize(2,vector<vector<int>>(3,vector<int>(prices.size(),-1)));
        
        // starting from position 0 and with maximum 2 transactions and with no stock bought.
        int result = recursion(prices , 0 , 2 , false);
        return result;
    }
};
