// https://practice.geeksforgeeks.org/problems/longest-bitonic-subsequence/0

#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	      cin>>arr[i];
        
	   //using LIS approach 
	    int dp[n];
	     dp[0]=1;
	    for(int i=1;i<n;i++)
	    {  
         int Max=0;
	       for(int j=0;j<i;j++)
	       {   
	           if(arr[j]<arr[i])
	           {
	              Max=max(Max,dp[j]); 
	           }
	       }
         dp[i]=Max+1;
	    }
      
	    int dp1[n];
	    dp1[n-1]=1;
      
	    for(int i=n-2;i>=0;i--)
	    {   
	        int Max=0;
	        for(int j=i+1;j<n;j++)
	        {
	           if(arr[j]<arr[i])
	              Max=max(Max,dp1[j]);
	        }
	        dp1[i]=Max+1;
	    }
	    int maxi=0;
	    for(int i=0;i<n;i++)
	        maxi=max(maxi,dp[i]+dp1[i]);
	    cout<<maxi-1<<endl;
	}
}
