#include <iostream>
using namespace std;
int main ()
{
    int a[99], b[99], c[99], e = 0, n, o = 0, l;
    cout << "Enter the size of array : ";
    cin >> l;
    for (n  = 0; n < l; n++)
    {
        cout << "Enter " << n << " element:";
        cin >> a[n];
        if (a[n] % 2 == 0)
        {
            b[e] = a[n];
            e++;
        }
        else
        {
            c[o] = a[n];
            o++;
        }
    }
    cout << "Array of even elements:\n";
    for(n = 0; n < e; n++)
        cout << b[n] << "\t";
    cout << "\nArray of odd elements:\n";
    for (n = 0; n < o; n++)
        cout << c[n] << "\t";
}
