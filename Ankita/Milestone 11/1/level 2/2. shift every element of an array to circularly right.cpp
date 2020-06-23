#include <iostream>
using namespace std;
int main ()
{
    int a[99], i, n, l, t;
    cout << "Enter the size of array: ";
    cin >> l;
    for (n  = 0; n < l; n++)
    {
        cout << "Enter " << n << " element: ";
        cin >> a[n];
    }
    t = a[l-1];
    for (n = l - 1; n >= 0; n--)
    {
        if (n == 0)
            a[n] = t;
        else
            a[n] = a[n-1];
    }
    for (n = 0; n < l; n++)
    {
        cout << a[n] << "\t";
    }
}
