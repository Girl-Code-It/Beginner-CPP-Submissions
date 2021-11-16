//https://practice.geeksforgeeks.org/problems/consecutive-1s-not-allowed1912/1#

class Solution{
public:
	// #define ll long long
	ll countStrings(int n) {
	    ll dp0[100000] = {0};
	    ll dp1[100000] = {0};
	    
	    dp0[1] = 1, dp1[1] = 1;
	    
	    for(int i=2;i<100000;i++){
	        dp0[i] = (dp0[i-1] + dp1[i-1])%(1000000007);
	        dp1[i] = (dp0[i-1])%(1000000007);
	    }
	    
	    return (dp0[n] + dp1[n])%(1000000007);
	}
};
