//q1- wap to check if a number is perfect.
#include<iostream>
using namespace std;
int main()
{
	int n,num,i,sum=0;
	cout<<"enter a number- ";
	cin>>n;
	n=num;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
	}
	if(num==sum)
	{
		cout<<"Perfect number.";
	}else
	{
		cout<<"Not Perfect.";
	}
	
}
