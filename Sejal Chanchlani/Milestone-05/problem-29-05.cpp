// Write a C program to find all prime factors of a number.
#include<iostream>
using namespace std;
int main()
{
	int n,i=2,count=0,sum=0;
	cout<<"enter number"<<endl;
	cin>>n;
	for(int i=2;i<=n;i++)
	{
		if(n%i==0)
		{
			for(int j=2;j<=i-1;j++)
			{
				if(i%j==0)
				{
					count=1;
					break;
				}
			}
			if(count!=1)
			{
				cout<<i<<endl;
			}
			i++;
			count=0;
		}
	
	}}
	
