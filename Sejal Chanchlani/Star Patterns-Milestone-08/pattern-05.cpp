//pattern-05.
#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cout<<"enter number of rows"<<endl;
	cin>>n;
	cout<<"enter number of columns"<<endl;
	cin>>m;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(j>=n-i+1 && j<=((n-1)+i))
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}
		}
		cout<<endl;
	}}
