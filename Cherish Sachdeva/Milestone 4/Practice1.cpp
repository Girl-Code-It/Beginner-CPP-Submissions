#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,num,b;
	cin>>num;
	cin>>b;
	a=1;
	cout<<"Enter base: "<<num<<endl;
	cout<<"Enter exponent: "<<b<<endl;
	for(int i=1;i<=b;i++){
		a=a*num;
	}
	cout<<a;
}