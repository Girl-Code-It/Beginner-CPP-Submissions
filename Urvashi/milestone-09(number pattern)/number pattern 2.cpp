#include<iostream>
using namespace std;
int main()
{
	int i, j , m , n;
	cout<<"enter the number of rows and columns:";
	cin>>m>>n;
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i%2==0)
			cout<<"0";
			else
			cout<<"1";
		
		}
		cout<<"\n";
	}
}
