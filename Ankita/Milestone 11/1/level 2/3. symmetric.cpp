#include <iostream>
using namespace std;
int main()
{
    int a[3][3], i, j, m = 1;
    for (i = 0; i < 3; i++)
    {
        for(j = 0; j< 3; j++)
        {
            cout << "Enter a[" <<i << "][" << j << "]: ";
            cin >> a[i][j];
        }
    }
    cout << "Transpose of this matrix: \n";
    for (i = 0; i < 3; i++)
    {
        for(j = 0; j< 3; j++)
        {
            cout << a[j][i] << "\t";
            if (a[j][i] != a[i][j])
                m = 0;
        }
        cout << "\n";
    }
    if (m == 1)
        cout << "This is a symmetric matrix.";
    else
        cout << "This is not a symmetric matrix.";
}
