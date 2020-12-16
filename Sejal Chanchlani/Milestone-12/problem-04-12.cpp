//problem-04-12
#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cout<<"enter rows "<<endl;
	cin>>n;
	cout<<"enter columns "<<endl;
	cin>>m;
	int a[n][m];
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
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(j>=i)
			{
				cout<<a[i][j]<<" ";
			}
			else
			{
				cout<<" ";
			}
		}
		cout<<endl;
	}
}
