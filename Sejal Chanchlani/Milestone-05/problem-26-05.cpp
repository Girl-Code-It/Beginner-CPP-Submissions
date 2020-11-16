//Write a C program to check whether a number is Prime number or not.
#include<iostream>
using namespace std;
int main()
{
	int n,count=0;
	cout<<"enter number"<<endl;
	cin>>n;
	for(int i=2;i<=n-1;i++)
	{
		if(n%i==0)
		{
			count=1;
			break;
		}
	}
	if(count==1)
	{
		cout<<"number is non-prime"<<endl;
	}
	else
	cout<<"number is a prime number";
}
