/*Write a code which inputs two numbers m and n and creates a matrix of size m x n (m rows and n columns) in which every elements is either X or 0. The Xs and 0s must be filled alternatively, the matrix should have outermost rectangle of Xs, then a rectangle of 0s, then a rectangle of Xs, and so on..

Input Format
You need to tell that how many rows and columns your matrix need to have and these values should be separated by space.

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
Enter your code here. Read input from STDIN. Print your output to STDOUT*/
#include <iostream>
using namespace std;
int main()
{
    //Write code here
    int m, n, i, j;
    cin >> m >> n;
    char mat[m][n], turn = 'X';
    int k = m, l = n, ref_j = n, ref_i = m, p = m*n;
    if (n >= 1 && n <= 1000 && m >= 1 && m <= 1000)
    {
        while (p > 0)
        {
            j = n-ref_j;
            for (i = m - ref_i; i < ref_i; i++)
            {
                if (turn == 'X')
                {
                    mat[i][j] = 'X';
                    p--;
                }
                else if (turn  == '0')
                {
                    mat[i][j] = '0';
                    p--;
                }
            }
            p++;
            j = ref_j - 1;
            for (i = m - ref_i; i < ref_i; i++)
            {
                if (turn == 'X')
                {
                    mat[i][j] = 'X';
                    p--;
                }
                else if (turn  == '0')
                {
                    mat[i][j] = '0';
                    p--;
                }
            }
            p++;
            i = m - ref_i;
            for (j = n - ref_j; j < ref_j; j++)
            {
                if (turn == 'X')
                {
                    mat[i][j] = 'X';
                    p--;
                }
                else if (turn  == '0')
                {
                    mat[i][j] = '0';
                    p--;
                }
            }
            p++;
            i = ref_i -  1;
            for (j = n - ref_j; j < ref_j; j++)
            {
                if (turn == 'X')
                {
                    mat[i][j] = 'X';
                    p--;
                }
                else if (turn  == '0')
                {
                    mat[i][j] = '0';
                    p--;
                }
            }
            p++;
            if (turn == 'X')
                turn ='0';
            else
                turn = 'X';
            ref_i--;
            ref_j--;
        }
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                cout << mat[i][j];
                if (j < n-1)
                    cout << " ";
            }
            if (i < m-1)
                cout << "\n";
        }
    }
}

