//problem-13-10
#include<iostream>
using namespace std;
void prime(int x)
{
	int count=0;
	for(int i=2;i<x;i++)
	{
		if(x%i==0)
		{
			count=1;
		}
	}
	if(count==1)
	{
		cout<<x<<" is not a prime number"<<endl;
	}
	else{
		cout<<x<<" is a prime number"<<endl;
	}
}
void perfect(int x)
{
	int sum=0;
	for(int i=1;i<x;i++)
	{
		if(x%i==0)
		{
			sum=sum+i;
		}
	}
	if(sum==x)
	{
		cout<<x<<" is a perfect number"<<endl;
	}
	else{
		cout<<x<<" is not a perfect number"<<endl;
	}
}
void armstrong(int x)
{
	int sum=0,r,temp=x;
	while(x)
	{
		r=x%10;
		sum=sum+(r*r*r);
		x=x/10;
	}
	if(sum==temp)
	{
		cout<<temp<<" is an armstrong number"<<endl;
	}
	else{
		cout<<temp<<" is not an armstrong number"<<endl;
	}
}
int main()
{
	int x;
	cout<<"enter number "<<endl;
	cin>>x;
	prime(x);
	perfect(x);
	armstrong(x);
}
