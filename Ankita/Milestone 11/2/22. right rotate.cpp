#include <iostream>
using namespace std;
int *RightRotate (int *a, int l)
{
    int temp, n;
    temp = a[l-1];
    for (n = l; n >= 0; n--)
    {
        if (n > 0)
        {
            a[n] = a[n-1];
        }
        else
        {
            a[n] = temp;
        }
    }
    return a;
}
int main ()
{
    int a[99], *b, n, i, l, r, temp;
    cout << "Enter the size of array and number of times to rotate: ";
    cin >> l >> r;
    for (n = 0; n < l; n++)
    {
        cout << "Enter " << n << " element: ";
        cin >> a[n] ;
    }
    for (n = 1; n <= r; n++)
        b = RightRotate (a, l);
    cout << r << " times right rotated array.\n";
    for (n = 0; n < l; n++)
        cout << b[n] << "\t";


}
