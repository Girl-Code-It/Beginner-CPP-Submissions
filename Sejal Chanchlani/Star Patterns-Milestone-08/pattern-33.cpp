//pattern-33
#include<iostream>
using namespace std;
int main()
{
	int n,m,k,p;
	cout<<"enter rows"<<endl;
	cin>>n;
	cout<<"enter columns"<<endl;
	cin>>m;
	for(int i=1;i<=n;i++)
	{
		k=65;
		for(int j=1;j<=m;j++)
		{
			if(j>=1 && j<=(n+1)-i || j>=(n-1)+i && j<=m)
			{
				cout<<(char)(k);
			}
			else{

				cout<<" ";
			}
			k++;
		}
		cout<<endl;
	}}
