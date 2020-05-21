#include<iostream>
using namespace std;
int main()
{
	int i, j, m , n;
	cout<<"enter the rows and columns:";
	cin>>m>>n;
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=i;j++)
		{
            if(j==1||j==i||i==m)
			cout<<"1";
			else
			cout<<"0";
		}
		cout<<"\n";
	}
}
