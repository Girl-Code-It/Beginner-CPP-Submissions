//Write a C program to find sum of first and last digit of a number.
#include<iostream>
using namespace std;
int main()
{
	long long int n,r1,r2;
	cout<<"enter number"<<endl;
	cin>>n;
	r1=n%10;
	cout<<"last digit = "<<r1;
	while(n!=0)
	{
		r2=n%10;
		n=n/10;
	}
    cout<<"last digit = "<<r2<<endl;
    cout<<" sum of first and last digits are = "<<r1+r2;
}
