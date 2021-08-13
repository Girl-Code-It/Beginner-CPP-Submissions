/*The plates were kept in box 1. He had to transfer the plates to box 3 
using box 2. However, there were some constraints. The old man could only 
take one plate at a time and he could only place a smaller plate on top of a 
larger plate. He could take a plate only from the top. Help the old man do so. 
There are N plates and he has to tell the nth move in the format (i, j) where 
a plate is being moved from ith box to jth box.
Note:
Given any number of plates, they can be transferred from box 1 to box 3 using box 2 using the following steps.
Step 1: Transfer first N-1 plates from box 1 to box 2 using box 3.
Step 2: Transfer the remaining plate from box 1 to box 3.
Step 3: Transfer the first N-1 plates from box 2 to box 3 using box 1.
*/
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    void towerOfHanoi(int n,int from,int to,int help,int &N,vector<int>&v){
        if(n==0)
            return;
        
        towerOfHanoi(n-1,from,help,to,N,v);  // n-1 plates moved from source to help rod
        
        N--;        // to reach given number of moves 
        if(N==0){
            v.push_back(from);   //value of from anf to for the given function
            v.push_back(to);
            return;
        }
        towerOfHanoi(n-1,help,to,from,N,v);	// n-1 plates moved from help rod to destionation rod
}
    
    vector<int> shiftPile(int n, int N) // n plates and N moves
	{
        // code here
        vector<int>v;
        int i=0;
        towerOfHanoi(n,1,3,2,N,v);
        return v;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, n;
        cin>>N>>n;
        
        Solution ob;
        vector<int> ans = ob.shiftPile(N, n);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}  // } Driver Cod
