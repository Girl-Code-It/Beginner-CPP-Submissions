//Write a C program to find first and last digit of a number.
#include<iostream>
using namespace std;
int main()
{
	long long int n,r;
	cout<<"enter number"<<endl;
	cin>>n;
	r=n%10;
	cout<<"last digit = "<<r;
	while(n!=0)
	{
		r=n%10;
		n=n/10;
	}
	cout<<"first digit = "<<r;
	
}
