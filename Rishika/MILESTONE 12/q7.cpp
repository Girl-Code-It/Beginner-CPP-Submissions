//Q7-Write a program to multiply array A and B of order NxL and LxM.
#include<iostream>
using namespace std;
int main()
{
	int A[10][10],B[10][10],C[10][10],m,l,n,i,j,k;
	cout<<"Enter number of rows in matrix A :";
	cin>>n;
	cout<<"Enter number of columns in matrix A :";
	cin>>l;
	cout<<"Enter elements in matrix A - ";
	for(i=0;i<n;i++)
	{
		for(j=0;j<l;j++)
		{
			cin>>A[i][j];
		}
	}
	cout<<"Enter number of rows in matrix B :";
	cin>>l;
	cout<<"Enter number of columns in matrix B :";
	cin>>m;
	cout<<"Enter elements in matrix B - ";
	for(i=0;i<l;i++)
	{
		for(j=0;j<m;j++)
		{
			cin>>B[i][j];
		}
	}
	cout<<"Matrix A : "<<endl;
	for(i=0;i<n;i++)
	{
		for(j=0;j<l;j++)
		{
			cout<<A[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"Matrix B : "<<endl;
	for(i=0;i<l;i++)
	{
		for(j=0;j<m;j++)
		{
			cout<<B[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl<<"A X B = C : "<<endl;
   for(int i=0;i<n;i++){
   for(int j=0;j<m;j++)
   {
      C[i][j]=0;
      for(k=0;k<l;k++)
        C[i][j]+=A[i][k]*B[k][j];
        cout<<C[i][j]<<" ";
    }
    cout<<endl;
}
}
