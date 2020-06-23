/*Find the length of the longest chain of consecutive integers in an unsorted 2D square array (non-diagonal).

Input Format
On first line you need to tell that how many rows and columns your matrix need to have and these values should be separated by space.Then after that, each line will represent will represent each row and you need to enter numbers which each rows should have separated by a space.

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

Time Limit(X):
1.00 sec(s) for each input.
Memory Limit:
512 MB
Source Limit:
100 KB*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
inline int longest_chain1(int* mat, int row, int col, int n, int m, int num)
{
    int check = 0, k[4] = {0,0,0,0};

    if( *(mat + row*n + col) + 1 == *(mat + (row+1)*n + col) && (row+1) < m)
    {
        row = row + 1;
        k[0] = longest_chain1((int*)mat, row,  col,  n, m, num+1);
        check++;
    }

    if(*(mat + row*n + col)  + 1 == *(mat + row*n + col-1) && (col-1) >= 0 /*or col >= 1*/)
    {
        col -= 1;
        k[1] = longest_chain1((int*)mat, row,  col,  n, m, num+1);
        check++;
    }
    if(*(mat + row*n + col)  + 1 == *(mat + row*n + col+1) && (col+1) < n)
    {
        col += 1;
        k[2] = longest_chain1((int*)mat, row,  col,  n, m, num+1);
        check++;
    }
    if(*(mat + row*n + col)  + 1 == *(mat + (row-1)*n + col) && (row - 1) >= 0 /*or row >= 1*/)
    {
        row -= 1;
        k[3] = longest_chain1((int*)mat, row,  col,  n, m, num+1);
        check++;
    }
    if (check == 0)
        return num;
    else
        return *max_element(k, k+4);
}
int main ()
{
    int m, n, i, j, num1 =1, num2 = 1, num3 = 1, num4 =1, row, col;
    int k[4] = {0,0,0,0};
    cin >> m >> n;
    if (n>=0 && n <= 1000 && m >= 0 && m <= 1000)
    {
        int mat[m][n];
        int l = m*n;
        int chain1[l], chain2[l], chain3[l], chain4[l], index1 =0, index2 =0, index3 =0, index4 =0;
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
                if ( mat[i][j] + 1 == mat[i+1][j] && (i+1) < m)
                {
                    row = i+1;
                    col = j;
                    chain1[index1] = longest_chain1((int*)mat, row,  col,  n, m, num1+1);
                    index1++;
                }
                if((mat[i][j] + 1 == mat[i][j+1]) && (j+1) < n )
                {
                    row = i;
                    col = j+1;
                    chain2[index2] = longest_chain1((int*)mat, row,  col,  n, m, num2+1);
                    index2++;
                }
                if (mat[i][j] + 1 == mat[i][j-1] && (j-1) >= 0)
                {
                    row = i;
                    col = j-1;
                    chain3[index3] = longest_chain1((int*)mat, row,  col,  n, m, num3+1);
                    index3++;
                }
                if (mat[i][j] + 1 == mat[i-1][j] && (i-1) >= 0)
                {
                    row = i-1;
                    col = j;
                    chain4[index4] = longest_chain1((int*)mat, row,  col,  n, m, num4+1);
                    index4++;
                }
            }
        }
        if (index1 > 0)
            k[0] = *max_element(chain1, chain1+index1);
        if (index2 > 0)
            k[1] = *max_element(chain2, chain2+index2);
        if (index3 > 0)
            k[2] = *max_element(chain3, chain3+index3);
        if (index4 > 0)
            k[3] = *max_element(chain4, chain4+index4);

		if (index1 == 0 && index2 == 0 && index3 == 0 && index4 ==0)
            cout << "1";
        else
             cout << *max_element(k, k+4);

    }
}
