#include<iostream>
using namespace std;
int main(){
	int n,bin=0,place=1,d;
	cout<<"enter the decimal number: ";
	cin>>n;
	while(n!=0){
		d=n%2;
		bin=bin+(d*place);
		n/=2;
		place*=10;
	}
	cout<<bin;
	return 0;
}
