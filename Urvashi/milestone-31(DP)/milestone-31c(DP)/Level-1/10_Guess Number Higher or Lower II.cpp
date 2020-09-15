//  https://leetcode.com/problems/guess-number-higher-or-lower-ii/

class Solution {
public:
    int getMoneyAmount(int n) {
        vector<vector<int>> dp(n+1, vector<int>(n+1, 0));
        
        //dp[i][j] - the amount of money needed for guaranteed win,
        // when range is [i, j] (note: both are inclusive)
        for(int l = 1; l <= n; l++)
        {
            for(int i = 0; i+l-1 <= n; i++)
            {
                
                if(l==1)
                {
                    // if length = 1, then the only number guessed is correct, no penalty
                    dp[i][i+l-1] = 0; 
                }
                else if(l==2)
                {
                    // if length = 2, guess the lower number, 
                    // if it's not correct then the other number will be the correct one
                    // so max amount to guarantee win is the lower of two numbers
                    dp[i][i+l-1] = i; 
                }
                else
                {
                    int ans = INT_MAX;
                    // if you guess a number j between i, i+l-1
                    // then cost will be j + max of the money required to guarantee win on the either side
                    for(int j = i+1; j < i+l-1; j++)
                    {
                         ans = min(ans, j + max(dp[i][j-1], dp[j+1][i+l-1]));
                    }
                    
                    dp[i][i+l-1] = ans;
                }
            }
        }
        
        return dp[1][n];
    }
};
