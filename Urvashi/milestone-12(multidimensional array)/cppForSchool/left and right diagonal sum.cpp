//question:-to find sum of left diagonal elements and sum of right diagonal elements..
#include<iostream>
using namespace std;
void leftdiagonalsum( int A[3][3])
{
	int i , j ,sum=0;
	cout<<"sum of left diagonal elements is="<<endl;
	for(int i=0;i<3;i++)
	for(int j=0;j<3;j++)
	{
		if(i==j)
		{
		sum+=A[i][j];	
		}
	}
	cout<<sum<<endl;
}
void rightdiagonalsum( int A[3][3])
{
	int i , j, sum=0;
	cout<<"sum of right diagonal elements is="<<endl;
	for(int i=0;i<3;i++)
	for(int j=0;j<3;j++)
	{
		if(j==3-1-i)
		{
		sum+=A[i][j];	
		}
	}
	cout<<sum<<endl;
}

int main()
{
int m , n , A[3][3];
     cout<<"enter the elements in the array:";
	for(int i=0;i<3;i++)
	for(int j=0;j<3;j++)
	cin>>A[i][j];
		for(int i=0;i<3;i++)
		{
	for(int j=0;j<3;j++)
	{
	cout<<A[i][j];}
	cout<<"\n";}
leftdiagonalsum(A)	;
rightdiagonalsum(A);
}
