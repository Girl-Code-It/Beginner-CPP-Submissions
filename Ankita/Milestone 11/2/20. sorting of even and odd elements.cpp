#include <iostream>
using namespace std;
int *ascending(int *a, int l)
{
    int i, n, temp;
    for (n = 0; n < l; n++)
    {
        for (i = n+1; i < l; i++)
        {
            if (a[n] > a[i])
            {
                temp = a[n];
                a[n] = a[i];
                a[i] = temp;
            }
        }
    }
    return a;
}
int main ()
{
    int a[99], b[99], c[99], n, i, l, e = 0, o = 0;
    cout << "Enter the size of array: ";
    cin >> l;
    for (n = 0; n < l; n++)
    {
        cout << "Enter " << n << " element: ";
        cin >> a[n];
        if (a[n]%2 == 0)
        {
            b[e] = a[n];
            e++;
        }
        else
        {
            c[o] = a[n];
            o++;
        }
    }
    int *even , *odd;
    even = ascending (b, e);
    odd = ascending (c, o);
    cout << "Array in sorted order:\n";
    for (n = 0; n < l; n++)
    {
        if (n < e)
        {
            a[n] = even[n];
        }
        else
            a[n] = odd[n-e];
        cout << a[n] << "\t";
    }

}
