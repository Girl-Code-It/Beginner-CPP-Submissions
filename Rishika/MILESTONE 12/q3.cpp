//Q3- Write a user-defined function in C++ to display the multiplication of row element of two-dimensional array A[4][6] containing integer.
#include<iostream>
using namespace std;
int mult(int a[4][6])
{
	int m,i,j;
	for(i=0;i<4;i++)
	{		m=1;
		for(j=0;j<6;j++)
		{
			m=m*a[i][j];
		}
    cout<<"Multiplication of elements of Row "<<i<<" = "<<m<<endl;
	}
}
int main()
{
	int A[4][6],i,j;
	cout<<"Enter elements in the array A - ";
	for(i=0;i<4;i++)
	{
		for(j=0;j<6;j++)
		{
			cin>>A[i][j];
		}
	}
	cout<<"For the matrix A : "<<endl;
	for(i=0;i<4;i++)
	{
		for(j=0;j<6;j++)
		{
			cout<<A[i][j]<<" ";
		}
		cout<<endl;
	}
	mult(A);
}
