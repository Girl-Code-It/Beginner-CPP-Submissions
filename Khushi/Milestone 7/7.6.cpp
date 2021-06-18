//initialize and print all elements of array.
#include<iostream>
using namespace std;
int main ()
{
    int m, n, i, j, A[10][10];
    cout << "Enter the number of rows and columns of the matrix : ";
    cin >> m >> n;
    cout << "Enter the array elements : ";
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            cin >> A[i][j];
    cout << "Matrix : \n ";
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            cout << A[i][j] << "  ";
        cout << "\n ";
    }
    
    return 0;
}
