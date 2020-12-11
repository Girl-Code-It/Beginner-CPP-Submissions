//problem-06-12
#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cout<<"enter rows - "<<endl;
	cin>>n;
	cout<<"enter columns - "<<endl;
	cin>>m;
	int a[n][m],b[n][m],c[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>a[i][j];
			
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>b[i][j];
			
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<b[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
		
	}
	cout<<"after addition "<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<c[i][j]<<" ";
		}
		cout<<endl;	
	}
	
	
	
}
