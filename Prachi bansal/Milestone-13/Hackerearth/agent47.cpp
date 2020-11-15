#include<iostream>
using namespace std;
int main(){
	int n,no; 
	string s,d;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s;
		int ans=0;
		int m=s.length();
		for(int j=0;j<m;j++){
			if(s[j]=='$' || s[j]=='&'){
				no=j+1;
			}
			ans+=no;
		}
		cout<<ans<<endl;
	}
	return 0;
}
