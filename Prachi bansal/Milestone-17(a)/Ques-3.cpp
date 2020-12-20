#include<iostream>
using namespace std;
int c;
int fib(int a,int b,int n){
	if(n==0){
		return 0;
	}
	c=a+b;
	a=b;
	b=c;
	cout<<c<<" ";
	return fib(a,b,n-1);
}
int main(){
	int n;
	cin>>n;
	int a=0,b=1;
	cout<<1<<" ";
	int m=fib(a,b,n-1);
	//cout<<m;
	return 0;
}
