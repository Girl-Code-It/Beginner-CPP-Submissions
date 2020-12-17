//problem-12-11
#include<iostream>
using namespace std;
int main()
{
	int n,temp,r,sum=0;
	cout<<"enter number"<<endl;
	cin>>n;
	temp=n;
	while(temp!=0)
	{
		r=temp%10;
		sum=sum+r;
		temp=temp/10;
	}
	cout<<"sum of digits of number is "<<sum;
	
}
