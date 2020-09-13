#include <iostream>
using namespace std;
int main ()
{
    int l, n, a[99], i = 0;
    cout << "Enter the size of array: ";
    cin >> l;
    for (n = 0; n < l; n++)
    {
        cout << "Enter " << n << " element : ";
        cin >> a[n];
    }
    int largest1 = a[0];
    for (n = 0; n < l; n++)
    {
        if (a[n] > largest1)
            largest1  = a[n];
            i = n;
    }
    int largest2 = a[i+1];
    for (n = 0; n < l; n++)
    {
        if (a[n] > largest2 && a[n] < largest1)
            largest2 = a[n];
    }
    cout << "Second largest element = " << largest2;
}
