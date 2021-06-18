//15
#include<iostream>
using namespace std;
int main()
{
	int i,j,k;
	for(i=1;i<5;i++)
	{   k=1;
		for(j=1;j<=5;j++)
		{
			if(j>=6-i && j<=5)
			{
				cout<<k;
				k++;
			}else
			{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	for(i=5;i<=9;i++)
	{
		k=1;
		for(j=1;j<=5;j++)
		{
			if(j>=i-4 && j<=5)
			{
				cout<<k;
				k++;
			}else
			{
				cout<<" ";
			}
		}
		cout<<endl;
	}
}
