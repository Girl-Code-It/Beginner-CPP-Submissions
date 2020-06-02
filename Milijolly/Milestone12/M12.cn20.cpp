/*Given a matrix where every cell has some number of coins. Count number of ways to reach bottom right from top left with exactly k coins. 
We can move to (i+1, j) and (i, j+1) from a cell (i, j).*/

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 

using namespace std;

int R=3,C=3;

int pathCountRec(int mat[][3], int m, int n, int k) 
{ 
    
    if (m < 0 || n < 0) 
	return 0; 
    
	if (m==0 && n==0) 
	return (k == mat[m][n]); 
  
    
    return pathCountRec(mat, m-1, n, k-mat[m][n]) + 
           pathCountRec(mat, m, n-1, k-mat[m][n]); 
} 
  

int pathCount(int mat[][3], int k) 
{ 
    return pathCountRec(mat, R-1, C-1, k); 
} 
  

int main() 
{ 
    int k,R,N; 
    int mat[3][3];
	
	cout<<"enter the number of rows "<<endl;
	cin>>R;
	cout<<"enter the number of columns "<<endl;
	cin>>C;
	
	cout<<"enter array elemnts ";
	
	for(int i=0;i<R;i++)
	{
		for(int j=0;j<C;j++)
		{
			cin>>mat[i][j];
		}
	}
	cout<<endl<<"enter value of k "<<endl;
	cin>>k; 
    cout << pathCount(mat, k); 
    return 0; 
}
