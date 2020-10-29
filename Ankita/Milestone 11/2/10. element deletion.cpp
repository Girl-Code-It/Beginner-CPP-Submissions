#include <iostream>
using namespace std;
int main ()
{
    int a[99], n, i, l;
    cout << "Enter the size of array: ";
    cin >> l;
    for (n = 0; n < l; n++)
    {
        cout << "Enter " << n << " element: ";
        cin >> a[n];
    }
    cout << "Enter the index to delete: ";
    cin >> i;
    for (n = 0; n < l-1; n++)
    {
        if (n >= i)
        {

            a[n] = a[n+1];
        }
    }
    for (n = 0; n < l-1; n++)
    {
        cout << a[n] << "\t";
    }
}
