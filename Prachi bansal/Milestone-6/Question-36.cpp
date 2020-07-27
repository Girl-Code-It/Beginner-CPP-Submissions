#include<iostream>
using namespace std;
int main(){
	int a=0,b=1,n,c;
	cout<<"Enter the value of n: ";
	cin>>n;
	cout<<"Fibonacci Series: ";
	cout<<a<<" "<<b<<" ";
	for(int i=0;i<n-2;i++){		
	c=a+b;
	a=b;
	b=c;	
	cout<<c<<" ";
	}
	return 0;
}
