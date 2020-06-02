#include<iostream>
using namespace std;
int main()
{
	int i, j , m , n;
	cout<<"enter the number of rows and columns:";
	cin>>m>>n;
	for(i=1;i<=m;i++)
	{
		for(j=i;j<i+n;j++)
		{
			cout<<j;
		
		}
		cout<<"\n";
	}
}
