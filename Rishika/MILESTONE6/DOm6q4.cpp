//q4- wap to print all strong numbers from 1 to n.
#include<iostream>
using namespace std;
int main()
{
	int n,i,j,f=1,l,sum=0;
	cout<<"Enter a number- ";
	cin>>n;
	for(i=1;i<=n;i++)
	{   l=i%10;
		while(i!=0)
		{   
			for(j=1;j<=l;j++)
			{
				f=f*j;
				sum=sum+f;
				break;
			}
		}
	if(sum==i)
	{
	cout<<i<<endl;	
	}	
	}
}
