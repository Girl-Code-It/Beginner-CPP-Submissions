//q2- wap to print all perfect numbers from 1 to n.
#include<iostream>
using namespace std;
int main()
{
	int n,i,j,sum;
	cout<<"Enter a number- ";
	cin>>n;
	for(i=1;i<=n;i++)
	{   sum=0;
	    for(j=1;j<i;j++)
		{
			if(i%j==0)
			{
				sum=sum+j;
			}
		}
		if(sum==i)
		{
			cout<<i<<" ";
		}
	}
}
