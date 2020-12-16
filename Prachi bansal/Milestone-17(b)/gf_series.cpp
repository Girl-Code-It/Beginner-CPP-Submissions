#include<bits/stdc++.h> 
using namespace std; 

class Solution
{
public:
    
    void gseries(int N,int i,int a,int b)
    {
        if(i==N){
            return ;
        }
        int c=a*a-b;
        if(i==0){
            cout<<a<<" ";
        }else if(i==1){
            cout<<b<<" ";
        }else{
            cout<<c<<" ";
            a=b;
            b=c;
        }
        i++;
        return gseries(N,i,a,b);   
    }
    void gfSeries(int N)
    {  
        gseries(N,0,0,1);  
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
