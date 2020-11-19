#include<iostream>
using namespace std;
int main(){
	string s;
	int n,m;
	getline(cin,s);
	cin>>n>>m;
	if(isupper(s[n-1])){
		s[n-1]=tolower(s[n-1]);
	}else{
		s[n-1]=toupper(s[n-1]);
	}
	if(isupper(s[m-1])){
		s[m-1]=tolower(s[m-1]);
	}else{
		s[m-1]=toupper(s[m-1]);
	}
	cout<<s;
	return 0;
}
