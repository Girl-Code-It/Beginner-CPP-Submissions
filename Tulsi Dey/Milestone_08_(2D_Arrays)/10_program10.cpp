/*
Find the length of the longest chain of consecutive integers in an unsorted 2D square array 
(non-diagonal).

Input Format
On first line you need to tell that how many rows and columns your matrix need to have and 
these values should be separated by space.Then after that, each line will represent will 
represent each row and you need to enter numbers which each rows should have separated by 
a space.

Constraints
1 <= n,m <= 1000

Output Format
Print the length of the longest chain to the stdout.

Sample TestCase 1
Input
3 3
3 2 5
4 1 4
5 6 5
Output
6
Explanation
Consecutive integers are 1, 2, 3, 4, 5, 6. Hence, count is 6.

*/
#include <bits/stdc++.h> 
#define N 500
using namespace std; 
int longestCell(int i, int j, int mat[N][N], int dp[N][N], int n, int m);
int longestChain(int mat[N][N], int n, int m);

int main() 
{ 
	int n, m;
    cin>>n;cin>>m;
	int mat[N][N]; 

    for(int i = 0; i < n; i++)
    for(int j = 0; j < m; j++)
    cin>>mat[i][j];
    
	cout<<longestChain(mat,n,m); 
	return 0; 
} 
int longestChain(int mat[N][N], int n, int m) 
{ 
    if(n == 0 || m == 0) return 0;
	int res = 1; 
    if(n == 1)
    {
        for(int j = 0; j < m - 1; j++)
        if(mat[0][j] + 1 == mat[0][j+1])
        res++;

        return res;
    }
	int dp[N][N]; 
	memset(dp, -1, sizeof dp); 

	for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        { 
			if (dp[i][j] == -1) 
			longestCell(i, j, mat, dp,n,m); 

			res = max(res, dp[i][j]); 
		} 
	} 
	return res; 
} 
int longestCell(int i, int j, int mat[N][N], int dp[N][N], int n, int m) 
{ 
	if (i < 0 || i >= n || j < 0 || j >= m) return 0; 

	if (dp[i][j] != -1) return dp[i][j]; 

	int x = INT_MIN, y = INT_MIN, z = INT_MIN, w = INT_MIN; 
 
	if (j < n - 1 && ((mat[i][j] + 1) == mat[i][j + 1])) 
	x = 1 + longestCell(i, j + 1, mat, dp, n, m); 
	if (j > 0 && (mat[i][j] + 1 == mat[i][j - 1])) 
	y = 1 + longestCell(i, j - 1, mat, dp, n, m); 
	if (i > 0 && (mat[i][j] + 1 == mat[i - 1][j])) 
	z = 1 + longestCell(i - 1, j, mat, dp, n, m); 
	if (i < n - 1 && (mat[i][j] + 1 == mat[i + 1][j])) 
	w = 1 + longestCell(i + 1, j, mat, dp, n, m); 

	return dp[i][j] = max(x, max(y, max(z, max(w, 1)))); 
} 