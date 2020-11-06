//question-12(print matrix):-Write a code which inputs two numbers m and n then a rectangle of Os,
//and creates a matrix of size m x n (m rows and n columns) in which every elements is either X or O.
//The Xs and Os must be filled alternatively, the matrix should have outermost rectangle of Xs,
// then a rectangle of Xs, and so on..
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n, sum, max, row = -1, i, j, x = 'X', round;
    char A[10][10];
    cout << "enter the size of the matrix A " << endl;
    cin >> n;
    cout << "the matrix A is=" << endl;
    round = ceil((float)n / 2);
    for (int i = 0; i < round; i++)
    {
        for (j = i; j <= n - 1 - i; j++)
            A[i][j] = x;
        for (j = i + 1; j <= n - 1 - i; j++)
            A[j][n - 1 - i] = x;
        for (j = n - 2 - i; j >= i; j--)
            A[n - 1 - i][j] = x;
        for (j = n - 2 - i; j > i; j--)
            A[j][i] = x;
        if (x == '0')
            x = 'X';
        else
            x = '0';
    }
    cout << "matrix is=" << endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << "\n";
    }
}
