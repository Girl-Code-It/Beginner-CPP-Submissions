//Write a C program to calculate product of digits of a number.
#include<iostream>
using namespace std;
int main()
{
	long long int n,prod=1;
	cout<<"enter number"<<endl;
	cin>>n;
	while(n!=0)
	{
		prod=prod*(n%10);
		n=n/10;
}
cout<<" prod = "<<prod<<endl;
}
		
