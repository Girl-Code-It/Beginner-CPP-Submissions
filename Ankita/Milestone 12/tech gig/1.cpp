/*Given a boolean matrix mat[M][N] of size M X N, modify it such that if a matrix cell mat[i][j] is 1 (or true) then make all the cells of ith row and jth column as 1.

Input Format
On first line you need to tell that how many rows and columns your matrix need to have and these values should be separated by space.Then after that, each line will represent will represent each row and you need to enter numbers which each rows should have separated by a space.

Constraints
1 <= n,m <= 1000

Output Format
Print the resultant matrix to the stdout where each each line should represent each row and values in the row should be separated by a space.

Sample TestCase 1
Input
2 2
1 0
0 0
Output
1 1
1 0
Time Limit(X):
1.00 sec(s) for each input.
Memory Limit:
512 MB
Source Limit:
100 KB
Enter your code here. Read input from STDIN. Print your output to STDOUT*/
#include <iostream>
using namespace std;
int main()
{
	//Write code here
	int m, n, i, j, k, index[99], t = 0, turn = 1;
	cin >> m >> n;
	if (n >= 1 && n <= 1000 && m >= 1 && m <= 1000)
	{
		bool mat[m][n];
		for (i = 0; i < m; i++)
		{
			for (j = 0; j < n; j++)
			{
				cin >> mat[i][j];
			}
		}
		for (i = 0; i < m; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (mat[i][j] == 1)
				{
					index[t] = i;
					t++;
					index[t] = j;
					t++;
				}
			}
		}
		for (int l = 0; l < t; l++)
		{
			if (turn == 1)
			{
				for (k = 0; k < n; k++)
				mat[index[l]][k] = 1;
				turn = 0;
			}
			else if (turn == 0)
			{
				for (k = 0; k < m; k++)
				mat[k][index[l]] = 1;
				turn = 1;
			}
		}
		for (i = 0; i < m; i++)
		{
			for (j = 0; j < n; j++)
			{
				cout << mat[i][j];
				if(j < n-1)
                    cout << " ";
			}
			if (i < m-1)
                cout << "\n";
		}
	}
}
