//pattern-12
#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cout<<"enter no of rows";
	cin>>n;
	cout<<"enter no of columns";
	cin>>m;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(j>=i && j<=(m+1)-i)
			{
				cout<<"*";
			}
			else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
}
