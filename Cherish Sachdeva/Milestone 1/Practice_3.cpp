#include<bits/stdc++.h>
using namespace std;
int main(){
	int num;
	cin>>num;
	string ans=num%2==0?"even":"odd";
	cout<<num<<" is "<<ans;
	return 0;
}