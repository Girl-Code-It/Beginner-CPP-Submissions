//q8- wap to print the sum of prime numbers from 1 to n.
#include<iostream>
using namespace std;
int main()
{
	int n,i,j,prime,sum=1;
	cout<<"enter a number= ";
	cin>>n;
	for(i=2;i<=n;i++)
	{
		prime=1;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				prime=0;
			}
		}
		if(prime==1)
		{
			sum=sum+i;
		}
	}
	cout<<"The sum of prime numbers from 1 to "<<n<<" is = "<<sum;
}
