//problem-07-10
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
	if(count==0)
	{
		cout<<x<<" is a prime number"<<endl;
	}
	else{
		cout<<x<<" is not a prime number"<<endl;
	}
}
int main()
{
	int x;
	cout<<"enter number"<<endl;
	cin>>x;
	prime(x);
	
}
