/*given an n x n matrix mat[n][n] of integers, find the maximum value of 
mat(c, d) – mat(a, b) over all choices of indexes such that both c > a and d > b.*/

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 

using namespace std;


int MaxDiff(int mat[4][4],int N) 
{ 
    int maxValue = 0; 
  
    for (int a = 0; a < N - 1; a++) 
    for (int b = 0; b < N - 1; b++) 
        for (int c = a + 1; c < N; c++) 
        for (int d = b + 1; d < N; d++) 
            if (maxValue < (mat[c][d] - mat[a][b])) 
                maxValue = mat[c][d] - mat[a][b]; 
  
    return maxValue; 
} 
  
 
int main() 
{  int n,i,j,a[4][4];
    cout<<"Enter the no. of rows "<<endl;
	cin>>n;
	cout<<endl;
	cout<<"enter elements of array "<<endl;
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
		
    }
    
	cout<<"array elements are"<<endl;
    for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<a[i][j]<<" ";
		}
	  cout<<endl;	
    }
    
    cout<<" MAX difference is "<<MaxDiff(a,n);
    
    getch();
    return 0;
}
