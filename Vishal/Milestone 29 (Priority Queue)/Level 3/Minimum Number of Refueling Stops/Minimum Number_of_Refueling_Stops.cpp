/*
dp[t] means the furthest distance that we can get with t times of refueling.

So for every station s[i],
if the current distance dp[t] >= s[i][0], we can refuel:
dp[t + 1] = max(dp[t + 1], dp[t] + s[i][1])

In the end, we'll return the first t with dp[i] >= target,
otherwise we'll return -1.

*/

class Solution
{
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>> s) 
    {
        long dp[501] = {startFuel};
        for (int i = 0; i < s.size(); ++i) 
            for (int t = i; t >= 0 && dp[t] >= s[i][0]; --t)
                 dp[t + 1] = max(dp[t + 1], dp[t] + s[i][1]);
            
        for (int t = 0; t <= s.size(); ++t) 
            if (dp[t] >= target)
                 return t;
        return -1;
    }
};