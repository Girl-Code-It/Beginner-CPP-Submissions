#include<iostream>
using namespace std;
int main()
{
	int i, j, m , n, k=1;
	cout<<"enter the rows and columns:";
	cin>>m>>n;
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=i;j++,k++)
		
			cout<<k<<" ";
		cout<<"\n";
	}
}
