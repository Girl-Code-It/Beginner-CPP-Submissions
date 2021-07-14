//Given a string S. The task is to print all permutations of a given string.

#include<bits/stdc++.h>
using namespace std;
class Solution
{
	public:
	    void find(int st,int e, string s,vector<string>&v)
	    {
	        if(st==e)
	         {
	            v.push_back(s);
	            return;
	         } 
	         else
            { 
                // Permutations made 
                for (int i = st; i <= e; i++) 
                { 
         
                    swap(s[st], s[i]); // first letter is fixed and rest are sawpped with it
                    
                    find(st+1, e,s,v); // Recursion called  for rest of the letters
                    
                    swap(s[st], s[i]); //it is done to attain original configuration 
                } 
            } 
	        
	    }
	    
		vector<string>find_permutation(string S)
		{
		    // Code here there
		    int n=S.size();
            vector<string> v;
            find(0,n-1,S,v);
            sort(v.begin(), v.end()); //to obtain lexicographical order.
            return v;
		}
};

// { Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}
  // } Driver Code Ends
