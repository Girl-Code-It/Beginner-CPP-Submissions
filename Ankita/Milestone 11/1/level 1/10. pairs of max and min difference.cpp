#include <iostream>
#include <cstdlib>
using namespace std;
int main ()
{
    int a[99], l, n, i, k, lar = 1, small = 1;
    cout << "Enter the length of array: ";
    cin >> l;
    for (n = 0; n < l; n++)
    {
        cout << "Enter " << n << " element: ";
        cin >> a[n];
    }
    int s1 = a[0], s2 = a[1], l1 = a[0], l2 = a[1];
    for (n = 0; n < l; n++)
    {
        for (i = 0; i < l; i++)
        {
            if (abs(s1-s2) > abs(a[n]-a[i])&& n != i)
                {
                    s1 = a[n];
                    s2 = a[i];
                }
            if (abs(l1-l2) < abs(a[n]-a[i]))
                {
                    l1 = a[n];
                    l2 = a[i];
                }
        }
    }
    cout << s1 << s2 << "\n" << l1 << l2;

}
