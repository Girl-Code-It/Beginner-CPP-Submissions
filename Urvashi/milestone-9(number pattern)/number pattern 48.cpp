#include<iostream>
using namespace std;
int main()
{
	int i, j, m , n;
	cout<<"enter the rows and columns:";
	cin>>m>>n;
	for(i=1;i<=m;i++)
	{ 
		for(j=1;j<=i;j++)
		{
			cout<<j;
		}
		for(j=i*2;j<m*2;j++)
		{
			cout<<" ";
		}
		for(j=i;j>=1;j--)
		{
			cout<<j;
		}
		cout<<"\n";}
	}

