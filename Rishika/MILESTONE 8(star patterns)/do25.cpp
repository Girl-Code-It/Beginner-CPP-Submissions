//25
#include<iostream>
using namespace std;
int main()
{
	int i,j,k;
	for(i=1;i<=11;i++)
	{   k=1;
		for(j=1;j<=21;j++)
		{
			if(j>=12-i && j<=10+i)
			{
				cout<<k;
			}else
			{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	for(i=12;i<=21;i++)
	{
		for(j=1;j<=21;j++)
		{
			if(j>=i-10 && j<=32-i)
			{
				cout<<k;
			}else
			{
				cout<<" ";
			}
		}
		cout<<endl;
	}
}
