#include <iostream>
using namespace std;
int main ()
{
    int a[99], b[99], n, i, m = 0, k = 1, l, o = 1;
    cout << "Enter the size of array: ";
    cin >> l;
    for (n = 0; n < l; n++)
    {
        cout << "Enter " << n << " element: ";
        cin >> a[n];
    }
    cout << "All duplicate elements are:\n";
    for (n = 0; n < l; n++)
    {
        k =  1;
        o = 1;
        for (int j = 0; j < m; j++)
        {
            if (n == b[j])
            {
                o = 0;
                break;
            }
        }
        if (o == 1)
            {
                for (i = 0; i < l; i++)
            {
                if (a[n] == a[i])
                {
                    k++;
                    if(n != i)
                    {
                        b[m] = i;
                        m++;
                    }
                }
            }
            if ( k > 2)
            {
                cout << a[n] << "\n";
            }
            }
    }
    int p = 1;
    k = 1;
    cout << "Array after deleting duplicate elements:\n";
    for (n = 0; n < l - m; n++)
    {
        k = 1;
        for (i = 0; i < m; i++)
        {
            if (n == b[i])
            {
                k = 0;
                break;
            }
        }
        if (k == 0)
        {
            a[n] = a[n+p];
            p++;
        }
    }
    for (n = 0; n < l-m; n++)
    {
        cout << a[n] << "\t";
    }
}
