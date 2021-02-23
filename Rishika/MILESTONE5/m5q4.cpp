//q9- wap to print prime factors of a number.
#include<iostream>
using namespace std;
int main()
{
	int n,i,j,prime;
	cout<<"Enter a number- ";
	cin>>n;
	for(i=2;i<=n;i++)
	{
		if(n%i==0)
		{
			prime=1;
			for(j=2;j<=i/2;j++)
			{
				if(i%j==0)
				{
					prime=0;
					break;
				}
			}
		if(prime==1)
		{
			cout<<i;
		}
		}
	}
}
