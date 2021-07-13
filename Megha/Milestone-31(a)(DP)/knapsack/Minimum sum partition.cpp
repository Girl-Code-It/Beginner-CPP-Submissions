//https://practice.geeksforgeeks.org/problems/minimum-sum-partition3317/1

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

	public:
	int minDiffernce(int arr[], int N) 
	{ 
	    int sum = 0;
	    for(int i=0;i<N;i++){
	        sum += arr[i];
	    }
	    
	    bool t[N+1][sum+1];
	    for(int i=0;i<N+1;i++){
	        t[i][0] = true;
	    }
	    
	    for(int i=1;i<sum+1;i++){
	        t[0][i] = false;
	    }
	    
	    for(int i=1;i<N+1;i++){
	        for(int j=1;j<sum+1;j++){
	            if(arr[i-1] <= j){
	                t[i][j] = t[i-1][j-arr[i-1]] || t[i-1][j];
	            }
	            else{
	                t[i][j] = t[i-1][j];
	            }
	        }
	    }
	    
	    int mn = INT_MAX;
	    for(int j=sum/2;j>=0;j--){
	       if(t[N][j] == true){
	           mn = sum-2*j;
	           break;
	       }
	    }
	  
	    return mn;
	} 
};


// { Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.minDiffernce(a, n) << "\n";
	     
    }
    return 0;
}
