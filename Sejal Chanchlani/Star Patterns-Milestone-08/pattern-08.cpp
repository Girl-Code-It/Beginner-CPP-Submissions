//pattern-03
#include<iostream>
using namespace std;
int main()
{
	int n,m,k;
	cout<<"enter no.of rows"<<endl;
	cin>>n;
	cout<<"enter no.of columns"<<endl;
	cin>>m;
	for(int i=1;i<=n;i++)
	{
		k=1;
		for(int j=1;j<=m;j++)
		{
			if(j>=(n+1)-i && j<=(n-1)+i)
			{
				cout<<k;
				if(j<n)
				{
					k++;
				}
				else
				{
					k--;
				}
			}
			else
			{
				cout<<" ";
			}
		}
		cout<<endl;
	}
}
