//Write a C program to print Fibonacci series up to n terms.
#include<iostream>
using namespace std;
int main()
{
	int n,n1=0,n2=1,n3;
	cout<<"enter number"<<endl;
	cin>>n;
	cout<<n1<<" ";
	cout<<n2<<" ";
	n3=n1+n2;
	cout<<n3<<" ";
	while(n!=3)
	{
		n1=n2;
		n2=n3;
		n3=n1+n2;
		cout<<n3<<" ";
		n--;
	
	}
}
