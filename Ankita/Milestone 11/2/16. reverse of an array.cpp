#include <iostream>
using namespace std;
int main ()
{
    int a[99], b[99], l, n, i;
    cout << "Enter the size of array: ";
    cin >> l;
    i = l-1;
    for (n  = 0; n < l; n++)
    {
        cout << "Enter " << n << " element:";
        cin >> a[n];
        b[i] = a[n];
        i--;
    }
    cout << "Reversed array:\n";
    for (n = 0; n < l; n++)
        cout << b[n] << "\t";
}
