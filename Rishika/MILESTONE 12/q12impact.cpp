#include<iostream>
using namespace std;
int main()
{
	int a[10][10],i,j,m,n,r,c,k=0;
	cin>>m>>n;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	for(i=0;i<r;i++)
	{
		{
			a[r]=0;
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<a[i][j];
		}cout<<endl;
	}
}
