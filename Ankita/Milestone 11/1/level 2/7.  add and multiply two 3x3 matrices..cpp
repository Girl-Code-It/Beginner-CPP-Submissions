#include<iostream>
using namespace std;
int main ()
{
    int a[3][3]={1,2,3,4,5,6,7,8,9}, b[3][3] = {1,2,3,4,5,6,7,8,9}, i, j, sum = 0, k;
    cout << "Sum:\n";
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << a[i][j]+b[i][j] << "\t";
        }
        cout << "\n";
    }
    cout << "Product:\n";
    for (i = 0; i < 3; i++)
    {
        for (k = 0; k <3; k++)
        {
           for (j = 0; j < 3; j++)
            {
                sum += a[i][j]*b[j][k];
            }
            cout << sum << "\t";
            sum = 0;
        }

        cout << "\n";

    }
}
