#include <bits/stdc++.h>
using namespace std;

    void jugglerSequence(int n){
        // code here
        vector<int>ans;

        cout<<n<<" ";
        if(n==1)
        	return;    
        int b = 0;
        if (n % 2 == 0)
        {
        	b = floor(sqrt(n));
        	return jugglerSequence(b);
		}
        else
        {
        b = floor(sqrt(n) * sqrt(n) * sqrt(n));
        return jugglerSequence(b);
    	}
    }
	int main(){
	    int t;
	    cin>>t;
	    while(t--){
	        int N;
	        cin>>N;
	        jugglerSequence(N);
	        
	    }
	    return 0;
	}  
