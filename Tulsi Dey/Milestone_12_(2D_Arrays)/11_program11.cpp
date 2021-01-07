/*
Write a code which inputs two numbers m and n and creates a matrix of size m x n (m rows and n columns) 
in which every elements is either X or 0. The Xs and 0s must be filled alternatively, the matrix should 
have outermost rectangle of Xs, then a rectangle of 0s, then a rectangle of Xs, and so on.. 

Input Format
You need to tell that how many rows and columns your matrix need to have and these values should be 
separated by space.

Constraints
1 <= n,m <= 1000

Output Format
Print the resultant matrix to the stdout.


Sample TestCase 1
Input
6 7
Output
X X X X X X X
X 0 0 0 0 0 X
X 0 X X X 0 X
X 0 X X X 0 X
X 0 0 0 0 0 X
X X X X X X X

*/
#include <iostream> 

using namespace  std;
void fill(int m, int n);

int main() 
{ 
    int n, m;
    cin>>n>>m;
    
	fill(n, m); 

	return 0; 
}
void fill(int m, int n) 
{ 
	
	int i, k = 0, l = 0; 
	int r = m, c = n; 
	char a[m][n]; 
	char x = 'X'; 

	while (k < m && l < n) 
	{ 
		for (i = l; i < n; ++i) 
		a[k][i] = x; 
		k++; 

		for (i = k; i < m; ++i) 
		a[i][n-1] = x; 
		n--; 

		if (k < m) 
		{ 
			for (i = n-1; i >= l; --i) 
			a[m-1][i] = x; 
			m--; 
		} 

		if (l < n) 
		{ 
			for (i = m-1; i >= k; --i) 
			a[i][l] = x; 
			l++; 
		} 

		x = (x == '0')? 'X': '0'; 
	} 

	for (i = 0; i < r; i++) 
	{ 
		for (int j = 0; j < c; j++) 
		if(j == c - 1) cout<<a[i][j]; 
        else cout<<a[i][j]<<" "; 
		cout<<endl; 
	} 
} 