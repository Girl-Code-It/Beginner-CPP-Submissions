#include <iostream>
using namespace std;
int main ()
{
    int l, i, n = 0, a[99], b[99];
    cout << "Enter the size of array: ";
    cin >> l;
    for (i = 0; i < l; i++)
    {
        cout << "Enter " << i << " element: ";
        cin >> a[i];
        if (a[i] < 0)
        {
            b[n] = a[i];
            n++;
        }
    }
    cout << "All negative elements: \n";
    for (i = 0; i < n; i++)
        cout << b[i] << "\n";
}
