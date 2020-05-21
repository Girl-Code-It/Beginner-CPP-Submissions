#include<iostream>
using namespace std;
int main()
{
	int i, j , m , n;
	cout<<"enter the number of rows and columns:";
	cin>>m>>n;
	for(i=1;i<=m;i++)
	{
		for(j=i;j<=n;j++)
		{
		cout<<j;	}
	for(j=6-i;j<=n;j++)
		{	
		cout<<m;	
		}
		cout<<"\n";
	}
}
