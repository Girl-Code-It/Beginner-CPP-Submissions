/*Given a n*n matrix where all numbers are distinct, find the maximum length path (starting from any cell) such 
that all cells along the path are in increasing order with a difference of 1. Only 4 possible movements allowed i.e up, down, left , and right.*/

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 
#include<math.h>

using namespace std;



int findLongestFromACell(int i, int j, int mat[3][3], int dp[3][3]) 
{  int n=3;
    if (i < 0 || i >= n || j < 0 || j >= n) 
        return 0; 
  
    // If this subproblem is already solved 
    if (dp[i][j] != -1) 
        return dp[i][j]; 
  
    // To store the path lengths in all the four directions 
    int x =0, y =0, z =0, w =0; 
  

    if (j < n - 1 && ((mat[i][j] + 1) == mat[i][j + 1])) 
        x = 1 + findLongestFromACell(i, j + 1, mat, dp); 
  
    if (j > 0 && (mat[i][j] + 1 == mat[i][j - 1])) 
        y = 1 + findLongestFromACell(i, j - 1, mat, dp); 
  
    if (i > 0 && (mat[i][j] + 1 == mat[i - 1][j])) 
        z = 1 + findLongestFromACell(i - 1, j, mat, dp); 
  
    if (i < n - 1 && (mat[i][j] + 1 == mat[i + 1][j])) 
        w = 1 + findLongestFromACell(i + 1, j, mat, dp); 
  

    // we will pick maximum from all the four directions else 1
    return dp[i][j] = max(x, max(y, max(z, max(w, 1)))); 
} 
  
  

int finLongestOverAll(int mat[3][3]) 
{  
    int result = 1; // as minimum length
  
    //  fill all entries in it as -1 
    int dp[3][3]; int n=3;
    for (int i = 0; i < n; i++)
	 { 
        for (int j = 0; j < n; j++) 
		{ 
            dp[i][j]=-1; 
                
    
        } 
    } 
  
    
    for (int i = 0; i < n; i++) 
	{ 
        for (int j = 0; j < n; j++)
		 { 
            if (dp[i][j] == -1) 
                findLongestFromACell(i, j, mat, dp);  // longest paths stored in the form of arrays 
  
            
            result = max(result, dp[i][j]); 
        } 
    } 
  
    return result; 
} 
  

int main() 
{  int n=3;
    int mat[3][3]; 
    
    cout<<" enter elements of the array "<<endl;
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>mat[i][j];
		}
		
	}                  
                     
                      
    cout<<"elements of the array are "<<endl;
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<mat[i][j];
		}
		cout<<endl;
		
	}                  
                      
    cout <<"Length of the longest path is "<<endl;
    cout <<finLongestOverAll(mat);
	cout<<endl; 
    
	getch();     
    return 0; 
}                   



















