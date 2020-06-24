#include <iostream>
using namespace std;
int main ()
{
    int a[99], b[99], n, i, l,r;
    cout << "Enter the size of array and number of times to rotate: ";
    cin >> l >> r;
    for (n = 0; n < l; n++)
    {
        cout << "Enter " << n << " element: ";
        cin >> a[n] ;
    }
    for (n = 0; n < r; n++)
    {
        b[n] = a[n];
    }
    for (n = 0; n < l; n++)
    {
        if (n < l-r)
            a[n] = a[n+r];
        else
            a[n] = b[n-l+r];
    }
    cout << r << " times left rotated array.\n";
    for (n = 0; n < l; n++)
        cout << a[n] << "\t";


}
