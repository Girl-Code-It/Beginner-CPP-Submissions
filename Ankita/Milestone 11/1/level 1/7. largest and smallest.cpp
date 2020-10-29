#include <iostream>
using namespace std;
int main ()
{
    int a[99], l, n, k, m = 1, p = 1;
    cout << "Enter the length of array: ";
    cin >> l;
    for (n = 0; n < l; n++)
    {
        cout << "Enter a number: ";
        cin >>a[n];
    }
    for (n = 0; n < l; n++)
    {
        m = 1;
        for (k = 0; k < l; k++)
        {
            if (a[n] < a[k])
            {
                m = 0;
                break;
            }
        }
        if (m == 1)
        cout << "Largest number = " << a[n] << "\n";
    }
    for (n = 0; n < l; n++)
    {
        p = 1;
        for (k = 0; k < l; k++)
        {
            if (a[n] > a[k])
            {
                p = 0;
                break;
            }
        }
        if (p == 1)
        cout << "Smallest number = " << a[n] << "\n";
    }
}



