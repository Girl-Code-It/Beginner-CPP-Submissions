//17
#include<iostream>
using namespace std;
int main()
{
	int i,j;
	for(i=1;i<5;i++)
	{
		for(j=1;j<=9;j++)
		{
			if(j<=6-i|| j>=4+i)
			{
				cout<<"*";
			}else
			{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	for(i=5;i<=9;i++)
	{
		for(j=1;j<=9;j++)
		{
			if(j<=i-4 || j>=14-i)
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
