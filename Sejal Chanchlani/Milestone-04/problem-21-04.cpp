//Write a C program to find power of a number using for loop.
#include<iostream>
using namespace std;
int main()
{
	int n,p;
	long long int x=1;
	cout<<"enter number whose power needs to be calculated"<<endl;
	cin>>n;
	cout<<"enter power"<<endl;
	cin>>p;
	while(p)
	{
		x=x*n;
		p--;
	}
	cout<<"ans= "<<x;
}
