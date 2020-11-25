//Write a C program to check whether a number is Armstrong number or not.
#include<iostream>
using namespace std;
int main()
{
	int r,n,sum=0,temp;
	cout<<"enter number"<<endl;
	cin>>n;
	temp=n;
	while(n!=0)
	{
		r=n%10;
		sum=sum+(r*r*r);
		n=n/10;	
	}
	if(sum==temp)
	{
		cout<<temp<<" is an armstrong number "<<endl;
	}
	else
	cout<<" not an armstrong number "<<endl;
}
