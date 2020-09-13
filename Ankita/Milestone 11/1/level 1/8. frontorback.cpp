#include <iostream>
using namespace std;
int main ()
{
    int a[99], n, i, l, m = 1;
    cout << "Enter the length of array: ";
    cin >> l;
    for (n = 0; n < l; n++)
    {
        cout << "Enter " << n << " element: ";
        cin >> a[n];
    }
    i = l - 1;
    for (n = 0; n < l; n++)
    {
        if (a[n] != a[i])
        {
            m = 0;
            break;
        }
        i--;
    }
    if (m == 1)
        cout << "Entered array is same either read from front or back";
    else
        cout << "Entered array is not same when read from front and back";
}
