//https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/submissions/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mx = 0, mn = INT_MAX, ans = 0;
        
        for(int i=1;i<prices.size();i++){
            mn = prices[i-1];    
            mx = max(mx+prices[i]-mn,mx);
            ans = max(ans,mx);
        }
        
        return ans;
    }
};
