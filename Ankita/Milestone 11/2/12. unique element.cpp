#include <iostream>
using namespace std;
int main ()
{
    int a[99], b[99], n, i, m = 0, k = 1, l;
    cout << "Enter the size of array: ";
    cin >> l;
    for (n = 0; n < l; n++)
    {
        cout << "Enter " << n << " element: ";
        cin >> a[n];
    }
    for (n = 0; n < l; n++)
    {
        k =  1;
        for (i = 0; i < l; i++)
        {
            if (a[n] == a[i])
            {
                k++;
            }
        }
        if ( k == 2)
        {
            b[m] = a[n];
            cout << b[m] << "\t";
            m++;
        }
    }
}
