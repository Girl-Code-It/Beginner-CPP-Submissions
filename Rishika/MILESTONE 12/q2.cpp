//Q2- Write user defined functions for square matrix to calculate Left and right diagonal sum.
#include<iostream>
using namespace std;
int right(int a[][10],int n)
{
	int i,j,r=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i+j==n-1)
			{
				r=r+a[i][j];
			}
		}
	}
	cout<<"Right Diagonal Sum = "<<r<<endl;
}
int left(int a[][10],int n)
{
	int i,j,l=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			{
				l=l+a[i][j];
			}
		}
	}
	cout<<"Left Diagonal Sum = "<<l<<endl;
}
int main()
{
	int a[10][10],n,i,j;
	cout<<"Enter the number of rows and columns = ";
	cin>>n;
	cout<<"Enter elements in the square matrix : ";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"Elements of the matrix are : "<<endl;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<a[i][j]<<"  ";
		}
		cout<<endl;
	}
	right(a,n);
	left(a,n);
}
