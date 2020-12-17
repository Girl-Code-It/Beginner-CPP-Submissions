//pattern-07
#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cout<<"enter no. of rows"<<endl;
	cin>>n;
	cout<<"enter np of columns"<<endl;
	cin>>m;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(j<=(n+1)-i || j>=(n-1)+i)
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}
		}
		cout<<endl;
	}
}
