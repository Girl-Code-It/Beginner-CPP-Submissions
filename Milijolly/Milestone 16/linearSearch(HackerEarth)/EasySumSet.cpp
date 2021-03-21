#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,m;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	cin>>m;
	int c[m];
	for(int i=0;i<m;i++)
		cin>>c[i];

	for(int i=1;i<=100;i++)
	{	int count=0;
		for(int j=0;j<n;j++)
		{	
			for(int k=0;k<m;k++)
			{	
				if(i+a[j]==c[k])
				{
					 count++;
				}
			}	
		}
		if(count==n)
		cout<<i<<" ";
	}

}
