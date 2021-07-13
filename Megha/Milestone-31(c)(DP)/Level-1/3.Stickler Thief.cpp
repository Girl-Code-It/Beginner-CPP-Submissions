//https://practice.geeksforgeeks.org/problems/stickler-theif-1587115621/1

class Solution
{
    public:
    //Function to find the maximum money the thief can get.
    ll FindMaxSum(ll arr[], ll n)
    {
        ll dp[n];
        
        if(n == 0){
            return 0;
        }
        
        if(n == 1){
            return arr[0];
        }
        
        dp[0] = arr[0];
        dp[1] = max(arr[0],arr[1]);
        for(ll i=2;i<n;i++){
            dp[i] = max(dp[i-1],dp[i-2]+arr[i]);
        }
        
        return dp[n-1];
    }
};
