//Matrix in diagonal order
#include<iostream>
using namespace std;
int main()
{
	int a[10][10],m,n,i,j,k,l;
	cin>>m>>n;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	for(k=0;k<m;k++)
	{
		cout<<a[k][0]<<" ";
		i=k-1;
		j=1;
		while(i>=0 && j<n)
		{
			cout<<a[i][j]<<" ";
			i--;
			j++;
		}
		cout<<endl;
	}
	for(k=1;k<n;k++)
	{
		cout<<a[m-1][k]<<" ";
		i=m-2;
		j=k+1;
		while(i>=0 && j<n)
		{
			cout<<a[i][j]<<" ";
			i--;
			j++;
		}
		cout<<endl;
	}
}
