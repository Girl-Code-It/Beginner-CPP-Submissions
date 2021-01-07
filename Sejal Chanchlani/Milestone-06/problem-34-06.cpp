//Write a C program to check whether a number is Strong number or not.
#include<iostream>
using namespace std;
int main()
{
	int n,temp,fact,r,sum=0;
	cout<<"enter number"<<endl;
	cin>>n;
	temp=n;
	while(n!=0)
	{
		fact=1;
		r=n%10;
		while(r!=0)
		{
			fact=fact*r;
			r--;
		}
		sum=sum+fact;
		n=n/10;
		
	}
	if(temp==sum)
	{
		cout<<temp<<"is a strong number";
	}
	else
	cout<<temp<<" is not a strong no.";
}
