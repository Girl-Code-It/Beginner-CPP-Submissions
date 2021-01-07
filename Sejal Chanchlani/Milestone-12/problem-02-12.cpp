//problem-02-12
#include<iostream>
using namespace std;
void left_diagonal(int *a,int n,int m)
{
	int sum=0,j;
	for(int i=0;i<n;i++)
	{
		j=i;
		sum=sum+*((a+i*n)+j);
	}
	cout<<"Sum of left diagonal - "<<sum<<endl;
}
void right_diagonal(int *a,int n,int m)
{
	int sum=0,j=n-1;
	for(int i=0;i<n;i++)
	{
		sum=sum+*((a+i*n)+j);
		j--;
	}
	cout<<"sum of right diagonal - "<<sum<<endl;
}
int main()
{
	int n,m;
	cout<<"enter rows "<<endl;
	cin>>n;
	cout<<"enter columns "<<endl;
	cin>>m;
	int a[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	right_diagonal((int *)a,n,m);
	left_diagonal((int *)a,n,m);
}
