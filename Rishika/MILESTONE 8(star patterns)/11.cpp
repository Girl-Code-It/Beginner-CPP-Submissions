//11
#include<iostream>
using namespace std;
int main()
{
	int i,j;
	for(i=1;i<4;i++)
	{
		for(j=1;j<=7;j++)
		{
			if(j<=i)
			{
				cout<<"*";
			}else
			{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	for(i=4;i>=1;i--)
	{
		for(j=1;j<=7;j++)
		{
			if(j<=i)
			{
				cout<<"*";
			}else
			{
				cout<<" ";
			}
		}
		cout<<endl;
	}
}
