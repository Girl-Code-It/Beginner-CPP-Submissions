#include<iostream>
using namespace std;
int main()
{
	int i, j , m , n, k;
	cout<<"enter the number of rows and columns:";
	cin>>m>>n;
	k=1;
	for(i=0;i<m;i++)
	{
		for(j=1;j<=n;j++,k++)
		{
			cout<<k<<" ";
		}
		cout<<"\n";
	}
}
