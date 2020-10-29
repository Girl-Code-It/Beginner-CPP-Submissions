#include <iostream>
using namespace std;
int main ()
{
    int a[99], b = 0, l, n, i;
    cout << "Enter the size of array: ";
    cin >> l;
    for (n  = 0; n < l; n++)
    {
        cout << "Enter " << n << " element:";
        cin >> a[n];
    }
    cout << "Element to search: ";
    cin >> i;
    for (n = 0; n < l; n++)
    {
        if (a[n] == i)
        {
            i = n;
            b = 1;
            break;
        }
    }
    if (b == 1)
        cout << "Index of searched element: " << i;
    else
        cout << "This element is not present in the entered array.";
}

