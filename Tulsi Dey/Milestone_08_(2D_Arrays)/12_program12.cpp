/*
2D Array - Impact on rows and columns (100 Marks)
Given a boolean matrix mat[M][N] of size M X N, modify it such that if a matrix cell mat[i][j] is 1 
(or true) then make all the cells of ith row and jth column as 1. 

Input Format
On first line you need to tell that how many rows and columns your matrix need to have and these 
values should be separated by space.Then after that, each line will represent will represent each 
row and you need to enter numbers which each rows should have separated by a space.

Constraints
1 <= n,m <= 1000

Output Format
Print the resultant matrix to the stdout where each each line should represent each row and values 
in the row should be separated by a space.

E.g-
Input
2 2
1 0
0 0

Output
1 1
1 0

*/
#include <iostream>

using namespace std;

int main()
{
    int m,n;
    cin>>m; cin>>n;
    int arr[m][n];

    for(int i = 0; i < m; i++)
    for(int j = 0; j < n; j++)
    cin>>arr[i][j];

    int max = 3;

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(arr[i][j]%max == 1)
            {
                for(int k = 0; k < n; k++)
                arr[i][k] += 1%max*max;
                for(int k = 0; k < m; k++)
                arr[k][j] += 1%max*max;
            }

        }
    }

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(arr[i][j]/max != 0)
            {
				if(j == n - 1) cout<<1;
				else cout<<1<<" ";
			}
            else
            {
				if(j == n - 1) cout<<0;
				else cout<<0<<" ";
			}
        }
        cout<<endl;
    }

    return 0;
}