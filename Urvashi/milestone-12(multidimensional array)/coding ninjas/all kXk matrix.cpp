#include<iostream>
using namespace std;
#define N 3
void printSumSimple(int mat[][N], int k) 
{ 
   cout<<"sum of all kxk matrix are="<<endl;
   if (k > N) return; 
   for (int i=0; i<N-k+1; i++) 
   {
      for (int j=0; j<N-k+1; j++) 
      {
        int sum = 0; 
        for (int p=i; p<k+i; p++) 
        for (int q=j; q<k+j; q++) 
        sum += mat[p][q]; 
        cout << sum << "  "; 
      } 
      cout << endl; 
   } 
}
int main()
{
	int i , j,k, A[3][3];
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
	int K=2;
	 printSumSimple(A,K) ;
	return 0;
}
