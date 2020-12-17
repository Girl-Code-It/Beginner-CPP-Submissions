//problem-05-12
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
	int i=n/2;
	cout<<"row elements - "<<endl;
	for(int j=0;j<m;j++)
	{
		cout<<a[i][j]<<" ";
		}	
		cout<<endl;
		cout<<"column elements - "<<endl;
		int j=n/2;
		for(int i=0;i<n;i++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
		
}
