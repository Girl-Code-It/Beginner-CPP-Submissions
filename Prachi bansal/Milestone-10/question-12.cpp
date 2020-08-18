#include<iostream>
using namespace std;
int fib(int d){
	int a=0,b=1,c;
	cout<<a<<" "<<b<<" ";
	for(int i=1;i<=d-2;i++){
		c=a+b;
		a=b;
		b=c;
		cout<<c<<" ";
	}
}
main(){
	int x;
	cout<<"Enter the number of terms: ";
	cin>>x;
	fib(x);
}
