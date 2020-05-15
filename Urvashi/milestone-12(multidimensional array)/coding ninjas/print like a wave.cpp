#include<iostream>
using namespace std;
int main()                 //question-7(print like a wave):-Given a two dimensional n*m array,
int n , A[10][3],  i, m,j;  // print the array in a sine wave order. i.e. print the first column top to bottom, next column bottom to top and so on.
cout<<"enter the size of the matrix A"<<endl;
cin>>n;
     cout<<"enter the binary  elements in the matrix A:";
	for(int i=0;i<n;i++)
	for(int j=0;j<n;j++)
	cin>>A[i][j];
	cout<<"the matrix A is="<<endl;
		for(int i=0;i<n;i++)
		{
	for(int j=0;j<n;j++)
	{
	cout<<A[i][j]<<"\t";}
	cout<<"\n";
	}
	cout<<endl;
	for(j=0;j<n;j++)
	{
		if(j%2==0)
		{
			for(i=0;i<n;i++)
			cout<<A[i][j]<<" ";
		}
		else
		{
			for(i=n-1;i>=0;i--)
			cout<<A[i][j]<<" ";
		}
	}
}
