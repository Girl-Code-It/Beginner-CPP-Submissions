#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,lt,ft;
	cin>>n;
	ft=n;
	lt=n%10;
	while(ft>=10){
		ft/=10;
	}
	cout<<"sum of first and last digit of "<<n<<" is "<<lt+ft;
	return 0;	
}