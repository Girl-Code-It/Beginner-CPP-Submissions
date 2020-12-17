//Write a C program to check whether a number is Perfect number or not.
#include<iostream>
using namespace std;
int main()
{
	int n,temp,sum=0;
	cout<<"enter number"<<endl;
	cin>>n;
	temp=n;
	for(int i=1;i<=n/2;i++)
	{
		if(n%i==0)
		{
			cout<<i<<" "<<endl;
			sum=sum+i;
		}
	}
	if(sum==n)
	{
		cout<<temp<<" is a perfect number"<<endl;
	}
	else
	cout<<temp<<" is not a perfect number";
}
