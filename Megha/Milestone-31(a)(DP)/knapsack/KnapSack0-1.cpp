#include<bits/stdc++.h>
using namespace std;
 // } Driver Code Ends

class Solution{
    public:
    // Returns the maximum value that  
    // can be put in a knapsack of capacity W 
    
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
       int t[n+1][W+1];
       
       for(int i=0;i<n+1;i++){
           for(int j=0;j<W+1;j++){
             if(i == 0 || j == 0)
             t[i][j] = 0;
          
         else if(wt[i-1] <= j){
             t[i][j] = max(val[i-1] + t[i-1][j-wt[i-1]], t[i-1][j]);
         }
         else
             t[i][j] = t[i-1][j];
        }
       }
       return t[n][W];
    }
};

// { Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}  // } Driver Code Ends
