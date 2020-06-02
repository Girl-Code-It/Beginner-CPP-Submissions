#include<iostream>     //question-19(find max diff):-Given an n x n matrix mat[n][n] of integers,
using namespace std;    // find the maximum value of mat(c, d) – mat(a, b) over all choices of indexes such that both c > a and d > b.
#define N 4
int findMaxValue(int mat[][N]) 
{ int maxValue = INT_MIN;
    for (int a = 0; a < N - 1; a++) 
    for (int b = 0; b < N - 1; b++) 
        for (int d = a + 1; d < N; d++) 
        for (int e = b + 1; e < N; e++) 
            if (maxValue < (mat[d][e] - mat[a][b])) 
                maxValue = mat[d][e] - mat[a][b]; 
    return maxValue;
}
int main()
{
	int i , j,k, A[4][4];
     cout<<"enter the elements in the matrix A:";
	for(int i=0;i<N;i++)
	for(int j=0;j<N;j++)
	cin>>A[i][j];
	cout<<"the matrix A is="<<endl;
		for(int i=0;i<N;i++)
		{
	for(int j=0;j<N;j++)
	{
	cout<<A[i][j]<<"\t";}
	cout<<"\n";
	}
	cout<<"max diff is="<<findMaxValue(A);
}
