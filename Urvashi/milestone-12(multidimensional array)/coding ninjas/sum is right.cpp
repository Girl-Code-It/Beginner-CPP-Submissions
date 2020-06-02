#include<iostream>
using namespace std;
int main()                             //question-1(sum is right):-Given a n x m matrix of integers,
 // replace every element with sum of elements present on its right excluding current element (in current row only).
{
    int n,m ,A[10][10], round,j, sum; 
    cout<<"enter the size of the matrix A "<<endl;
    cin>>m>>n;
    cout<<"enter the elements in the matrix A:";
	for(int i=0;i<m;i++)
	for(int j=0;j<n;j++)
	cin>>A[i][j];
	cout<<"the matrix A is="<<endl;
		for(int i=0;i<m;i++)
		{
	for(int j=0;j<n;j++)
	{
	cout<<A[i][j]<<"\t";}
	cout<<"\n";
	}
	cout<<"the matrix elements as sum of their right elements are= "<<endl;
	for(int i=0;i<m;i++)
	{
		sum=0;
		for(j=0;j<n;j++)
		{
			sum+=A[i][j];
	}
		for(j=0;j<n;j++)
		{
			sum-=A[i][j];
			A[i][j]=sum;
			cout<<A[i][j]<<"\t";
	}
	cout<<"\n";
	}
}

