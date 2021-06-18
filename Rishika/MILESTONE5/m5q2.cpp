//q7- wap to print prime numbers 1 to n.
#include<iostream>
using namespace std;
int main()
{
	int n,i,j,prime;
	cout<<"Enter a number- ";
	cin>>n;
	cout<<"Prime numbers from 1 to "<<n<<" are- 1,";
	for(i=2;i<=n;i++)
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
			cout<<i<<",";
		}
	}
}
