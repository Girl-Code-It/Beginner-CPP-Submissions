//Write a C program to print all Armstrong numbers between 1 to n.
#include<iostream>
using namespace std;
int main()
{
	int n,i=1,temp,r,count=0,sum=0;
	cout<<"enter limit"<<endl;
	cin>>n;
	while(i!=n)
	{
		temp=i;
		sum=0;
		while(temp!=0)
		{
			r=temp%10;
			sum=sum+(r*r*r);
			temp=temp/10;
		}
		if(sum==i)
		{
			cout<<i<<endl;
		}
		i++;
	}
}
	
