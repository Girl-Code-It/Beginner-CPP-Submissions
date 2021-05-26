//https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iv/submissions/

class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        int n = prices.size();
        if(n==0 ){
            return NULL;
        }
        
        int dp[k+1][n];
        
        for(int t=0;t<=k;t++){
            for(int d=0;d<n;d++){
                if(t == 0 || d == 0){
                    dp[t][d] = 0;
                }
            }
        }
        
        for(int t=1;t<=k;t++){
            for(int d=1;d<n;d++){
                int maxi = dp[t][d-1];
                for(int pd = 0; pd<d; pd++){
                    int ptilltm1 = dp[t-1][pd];
                    int ptth = prices[d] - prices[pd];
                    
                    maxi = max(maxi,ptilltm1+ptth);
                }
                dp[t][d] = maxi;
            }
        }
        
        return dp[k][n-1];
    }
};
