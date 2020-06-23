#include <iostream>
using namespace std;
int main ()
{
    int a[99], p , n, i, l, temp;
    cout << "Enter the size of array: ";
    cin >> l;
    for (n = 0; n < l; n++)
    {
        cout << "Enter " << n << " element: ";
        cin >> a[n];
    }
    cout << "Enter the choice:\n(1) Ascending Order.\n(2) Descending Order.\n";
    cin >> p;
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
    cout << "\n";
    if (p == 1)
        for (n = 0; n < l; n++)
            cout << a[n] << "\t";
    else if (p == 2)
        for (n = l-1; n >= 0; n--)
            cout << a[n] << "\t";5
}
