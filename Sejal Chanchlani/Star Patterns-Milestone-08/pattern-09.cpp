//pattern-09
#include<iostream>
using namespace std;
int main()
{
	int n,m,k;
	cout<<"enter rows"<<endl;
	cin>>n;
	cout<<"enter columns"<<endl;
	cin>>m;
	for(int i=1;i<=n;i++)
	{
		k=65;
		for(int j=1;j<=m;j++)
		{
			if(j<=(n+1)-i || j>=(n-1)+i)
			{
				cout<<(char)(k);
				if(j<(n))
				{
					k++;
				}
				else{
					k--;
				}
			}
			else{
				cout<<" ";
				if(j==n)
				  k--;
			}
		}
		cout<<endl;
	}
}
