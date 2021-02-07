//Q10- define a program to find whether a number is prime or not.
#include<iostream>
using namespace std;
pr(int x)
{   int prime=0;
	for(int i=2;i<x;i++)
	{
		if(x%i==0)
		prime=1;
	}
	if(prime==1)
	{
		cout<<"NOT A PRIME NUMBER.";
	}else
	{
		cout<<"PRIME NUMBER.";
	}
}int main()
{
	int n;
	cout<<"Enter a number = ";
	cin>>n;
	pr(n);
}
