#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++
class Solution
{
public:
   long long int series(int n )
    {      
         if(n==1 || n==2)
         {
         return n-1;
         }
        long long int x=series(n-2);
        long long int y=series(n-1);
         return (x*x-y);
    }
    void gfSeries(int N)
    { 
        for(long long int i=1;i<=N;i++)
        cout<<series(i)<<" ";
        cout<<endl;
    }
                                
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        ob.gfSeries(N);
    }
    return 0;
}  // } Driver Code Ends
