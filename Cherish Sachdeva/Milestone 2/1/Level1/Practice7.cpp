#include<bits/stdc++.h>
using namespace std;
int main(){
	int num;
	cin>>num;
	int ans=(num>=0)?num:(num*-1);
	cout<<"Absolute value of "<<num<<" is "<<ans;
	return 0;
}