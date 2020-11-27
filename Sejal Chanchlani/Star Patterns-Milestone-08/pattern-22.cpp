//pattern-22
#include<iostream>
using namespace std;
int main()
{
	int n,m,x,k;
	cout<<"enter no of rows"<<endl;
	cin>>n;
	cout<<"enter no of columns"<<endl;
	cin>>m;
	for(int i=1;i<=n;i++)
	{
		k=65;
		x=1;
		for(int j=1;j<=m;j++)
		{
			if(j>=(n+1)-i && j<=(n-1)+i)
			{
				if(j<=m/2+1)
				{
					cout<<x;
					x++;
				}
				else
				{
					cout<<(char)(k);
					k++;
				}
			}
			else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
}
