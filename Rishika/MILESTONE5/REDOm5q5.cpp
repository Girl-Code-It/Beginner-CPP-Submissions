//q10- wap to check whether a number is armstrong or not.
#include<iostream>
using namespace std;
int main()
{
	int n,num,sum=0,l,i,d=0;
	cout<<"Enter a number- ";
	cin>>n;
	num=n;
	while(n>0)
	{
		d=d+1;
		l=n%10;
		for(i=1;i<=d;i++)
		{
			sum=sum+pow(l,d);
		}
	n=n/10;
	}
	if(sum==num)
	{
		cout<<"armstrong.";
	}else
	{
		cout<<"not armstrong.";
	}

}
