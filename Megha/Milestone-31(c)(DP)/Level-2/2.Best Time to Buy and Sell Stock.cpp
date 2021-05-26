//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
//https://www.youtube.com/watch?v=4YjEHmw1MX0&list=PLD3AJo771hgtuB_3mSGK1rkxMqZuf58ic&index=1&t=9s

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mx = INT_MIN, mn = INT_MAX, ans = INT_MIN;
        
        for(int i=0;i<prices.size();i++){
            // we will check if prices value is less than mn then we will initialise mn with prices;
            if(prices[i]<mn){
                mn = prices[i];
            }
            
            mx = max(prices[i]-mn,mx);
            ans = max(ans,mx);
        }
        
        return ans;
    }
};
