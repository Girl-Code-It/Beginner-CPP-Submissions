//Longest chain
#include<iostream>
using namespace std;
int main()
{
	int m,n,i,j,max,min,a[10][10],s=0;
	cin>>m>>n;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	min=a[0][0];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]<=min)
			{
				min=a[i][j];
			}
		}
	}
	max=a[0][0];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]>=max)
			{
				max=a[i][j];
			}
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]>=min && a[i][j]<=max)
			s++;
		}
	}
	cout<<s;
}
