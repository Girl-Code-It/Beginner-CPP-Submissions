//pattern-31
#include<iostream>
using namespace std;
int main()
{
	int n,m,x,k;
	cout<<"enter rows"<<endl;
	cin>>n;
	cout<<"enter columns"<<endl;
	cin>>m;
	for(int i=1;i<=n;i++)
	{
		x=1;
		k=65;
		for(int j=1;j<=m;j++)
		{
			if(j>=(n+1)-i &&j<=(n-1)+i)
			{
			
			if(i%2!=0 && j%2==0)
			{
				cout<<x;
				x++;
			}
			else if(i%2==0 &&j%2!=0)
			{
				cout<<(char)(k);
				k++;
			}
			else{
				cout<<" ";
			}}
			else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
}
