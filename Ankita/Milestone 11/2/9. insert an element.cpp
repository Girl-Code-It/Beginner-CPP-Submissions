#include <iostream>
using namespace std;
int main ()
{
    int a[99], n, i, element, l, t[99];
    cout << "Enter the size of array: ";
    cin >> l;
    for (n = 0; n < l; n++)
    {
        cout << "Enter " << n << " element: ";
        cin >> a[n];
    }
    cout << "Enter the index and the value of element value: ";
    cin >> i >> element;
    for (n = 0; n <= l; n++)
    {
        if (n == i)
        {
            t[n] = a[n];
            a[n] = element;
        }
        if (n > i)
        {
            t[n] = a[n];
            a[n] = t[n-1];
        }
    }
    for (n = 0; n <= l; n++)
    {
        cout << a[n] << "\t";
    }
}
