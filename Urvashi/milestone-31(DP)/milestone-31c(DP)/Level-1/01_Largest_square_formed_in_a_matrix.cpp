// https://practice.geeksforgeeks.org/problems/largest-square-formed-in-a-matrix/0

#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int m,n;
	    cin>>m>>n;
	    int arr[m][n];
	    
	    for(int i=0;i<m;i++)
	        for(int j=0;j<n;j++)
	            cin>>arr[i][j];
	    
	    int dp[m][n];
	    
	    // initialising last row of dp matrix as of given matrix.
	    for(int i=0;i<n;i++)
	        dp[m-1][i]=arr[m-1][i];
	    
	    // initialising last column of dp matrix as of given matrix.
	    for(int i=0;i<m;i++)
	        dp[i][n-1]=arr[i][n-1];
	        
	    int maxi=0;
	    // traversing the matrix from last if we find any 1
	    // then add it in latest minimum length of square.
	    // but if we found 0 then restart finding length.
	    for(int j=n-2;j>=0;j--)
	    {
	        for(int i=m-2;i>=0;i--)
	        {
	            if(arr[i][j]==1)
	                dp[i][j]=arr[i][j]+min(dp[i+1][j+1],min(dp[i+1][j],dp[i][j+1]));
	            else
	                dp[i][j]=0;
	        }
	    }
	    
	    // taking maximum of all squares.
	    for(int i=0;i<m;i++)
	    {
	        for(int j=0;j<n;j++)
	            maxi=max(maxi,dp[i][j]);
	    }
	    
	    cout<<maxi<<endl;
	}
}

/* 0 1 0 1 0
   1 1 0 1 0 
   1 0 0 1 1
   1 1 0 0 0
   1 1 1 0 1
   1 1 1 1 1
   
   */