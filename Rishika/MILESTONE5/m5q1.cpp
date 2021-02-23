//q6- wap to check whether a number is prime or not.
#include<iostream>
using namespace std;
int main()
{
	int n,i,prime;
	cout<<"enter a number- ";
	cin>>n;
	prime=1;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			prime=0;
		}
	}
	if(prime==1)
	{
		cout<<"PRIME";
	}else if(prime==0)
	{
		cout<<"NOT PRIME";
	}
}
