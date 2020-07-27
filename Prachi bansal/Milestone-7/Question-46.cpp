#include<iostream>
using namespace std;
int main(){
	int n,oct=0,place=1,d;
	cout<<"enter the decimal number: ";
	cin>>n;
	while(n!=0){
		d=n%8;
		oct=oct+(d*place);
		n/=8;
		place*=10;
	}
	cout<<oct;
	return 0;
}
