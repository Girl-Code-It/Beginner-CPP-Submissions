//q3- wap to check if a number is strong number or not.
#include<iostream>
using namespace std;
int main()
{
	
	int n,num,sum=0,i,f,l;
	cout<<"Enter a number- ";
	cin>>n;
	num=n;
	while(n!=0)
	{   l=n%10;
	    f=1;
		for(i=1;i<=l;i++)
		{
	         f=f*i;
		}
		sum=sum+f;
		n=n/10;
	}
	if(num==sum)
	{
		cout<<"The number is a strong number.";
	}else
	{
		cout<<"the number is not a strong number.";
	}
}
