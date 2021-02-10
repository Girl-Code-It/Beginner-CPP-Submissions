#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,min,lcm,hcf;
	cin>>a;
	cin>>b;
	min=a<b?a:b;
	for(int i=1;i<=min;i++){
		if(a%i==0 && b%i==0){
			hcf=i;
		}
	}
	//cout<<hcf;
	lcm=(a*b)/hcf;
	cout<<lcm;
	return 0;
}