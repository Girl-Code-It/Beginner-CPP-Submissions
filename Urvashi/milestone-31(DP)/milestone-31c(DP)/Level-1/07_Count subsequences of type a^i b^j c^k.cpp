//  https://practice.geeksforgeeks.org/problems/count-subsequences-of-type-ai-bj-ck/0

#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int a=0,b=0,c=0;
	    string str;
	    cin>>str;
	    int n=str.size();
	    for(int i=0;i<n;i++){
	        if(str[i]=='a')
	            a=1+2*a;
	        else if(str[i]=='b')
	            b=a+2*b;
	        else
	            c=b+2*c;
	    }
	    cout<<c<<endl;
	}
	return 0;
}
