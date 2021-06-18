//q6-Write a program to add two array A and B of size m x n.
#include<iostream>
using namespace std;
int main()
{
	int A[10][10],B[10][10],c[10][10],m,n,i,j;
	cout<<"Enter the size of arrays A and B : "<<endl;
	cout<<"Enter the number of rows = ";
	cin>>m;
	cout<<"Enter the number of columns = ";
	cin>>n;
	cout<<"Enter elements in the matrix A - "<<endl;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>A[i][j];
		}
	}
	cout<<"Enter elements in the matrix B - "<<endl;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>B[i][j];
		}
	}
	cout<<"Matrix A : "<<endl;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<A[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"Matrix B : "<<endl;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<B[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"The sum of matrix A and B is matrix C = "<<endl;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<A[i][j]+B[i][j]<<" ";
		}
		cout<<endl;
	}	
}
