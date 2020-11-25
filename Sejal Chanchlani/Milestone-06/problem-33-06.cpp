// Write a C program to print all Perfect numbers between 1 to n.
#include<iostream>
using namespace std;
int main()
{
	int n,temp,sum=0,i=1;
	cout<<"enter number"<<endl;
	cin>>n;
	while(i!=n)
	{
		temp=i;
		sum=0;
		for(int j=1;j<=temp/2;j++)
		{
			if(temp%j==0)
			{
				sum=sum+j;
			}
		}
		if(sum==temp)
		{
			cout<<temp<<" ";
		}
		i++;
		
	}
}
