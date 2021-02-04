//Q4-Write a user defined function named Upper-half() which takes a two dimensional array A, with size N rows and N columns as argument and prints the upper half of the array
#include<iostream>
using namespace std;
int upperhalf(int A[][10],int n)
{
	int i,j;
	cout<<"UPPER HALF OF MATRIX : "<<endl;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(j>=i)
			{
				cout<<A[i][j]<<" ";
		}else
		{
			cout<<"  ";
		}
		}
		cout<<endl;
	}
}
int main()
{
	int a[10][10],n,i,j;
	cout<<"Enter the number of rows and columns = ";
	cin>>n;
	cout<<"Enter elements in the sq. matrix : "<<endl;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"For the matrix A: "<<endl;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	upperhalf(a,n);
}
