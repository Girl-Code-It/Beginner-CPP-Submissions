#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n,l,fac=1,sum=0,og;
	og=n;
	cout<<"enter a number = ";
	cin>>n;
	while(n!=0)
	{
		l=n%10;
		for(int i=1;i<=l;i++)
		{
			fac=fac*i;
		}
		sum=sum+fac;
		n=n/10;
	}
	cout<<"sum = "<<sum;
}
