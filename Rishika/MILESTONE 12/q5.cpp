//Q5-Write a function in C++ which accepts a 2D array of integers and its size as arguments and displays the elements of middle row and the elements of middle column.
#include<iostream>
using namespace std;
int mid(int a[][10],int n)
{
	int i,j;
	cout<<"Middle Row - ";
	for(j=0;j<n;j++)
	{   i=n/2;
		cout<<a[i][j]<<" ";
	}
	cout<<endl<<"Middle Column - ";
	for(i=0;i<n;i++)
	{
		j=n/2;
		cout<<a[i][j]<<" ";
	}
}
int main()
{
	int A[10][10],i,j,n;
	cout<<"Enter number of rows and columns (odd dimensions) = ";
	cin>>n;
	cout<<"Enter elements in the square matrix = "<<endl;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>A[i][j];
		}
	}
	cout<<"The Matrix is : "<<endl;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<A[i][j]<<" ";
		}
		cout<<endl;
	}
	mid(A,n);
}
