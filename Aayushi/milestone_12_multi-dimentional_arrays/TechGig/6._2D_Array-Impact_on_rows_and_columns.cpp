/*
2D Array - Impact on rows and columns (100 Marks)
Given a boolean matrix mat[M][N] of size M X N, modify it such that if a matrix cell mat[i][j] is 1 (or true) then make all the cells of ith row and jth column as 1.

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
*/
/*
#include <iostream>
using namespace std;
int main()
{
    //Write code here
    int m, n, i, j, r, c;
    cin>>m>>n;
    if(1<=n && m<=100 && 1<=m && n<=100)
    {
        bool mat[m][n];
        for(i=0; i<m; i++)
            for(j=0; j<n; j++)
                cin>>mat[i][j];
        for(i=0; i<m; i++){
            for(j=0; j<n; j++)
                {
                    if(mat[i][j]==1){
                    r=i; c=j;
                    }
                }
            }
        for(i=0; i<m; i++){
            for(j=0; j<n; j++)
            {
                if(i==r || j==c){
                    mat[i][j]=1;
                }
                cout<<mat[i][j];
				if(j < n-1)
                    cout << " ";
			}
			if (i < m-1)
                cout << "\n";
        }
    }
}
*/
#include <iostream>
using namespace std;
int main()
{
    //Write code here
    int m, n, i, j, r[99], c[99], k=0, x=0;
    cin>>m>>n;
    if(1<=n && m<=100 && 1<=m && n<=100)
    {
        bool mat[m][n];
        for(i=0; i<m; i++)
            for(j=0; j<n; j++)
                cin>>mat[i][j];
        for(i=0; i<m; i++){
            for(j=0; j<n; j++)
                {
                    if(mat[i][j]==1){
                    r[k]=i; c[k]=j;
                    k++;
                    }
                }
            }
        for(i=0; i<m; i++){
            for(j=0; j<n; j++)
            {
                for(x=0; x<k; x++){
                if(i==r[x] || j==c[x]){
                    mat[i][j]=1;
                }
                }
			}
        }
        for(i=0; i<m; i++){
            for(j=0; j<n; j++){
                cout<<mat[i][j];
				if(j < n-1)
                    cout << " ";
                }
			if (i < m-1)
                cout << "\n";
            }

    }
}
