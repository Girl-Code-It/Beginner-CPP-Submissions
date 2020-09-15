//  https://practice.geeksforgeeks.org/problems/consecutive-1s-not-allowed/0

class Solution{
public:
	// #define ll long long
	ll countStrings(int n) {
	    long int dp[100000]={0};
        dp[1]=2;dp[2]=3;
        for(long int i=3;i<100000;i++)
            dp[i]= (dp[i-1]+dp[i-2])%(1000000007);
        return dp[n];
	}
};
