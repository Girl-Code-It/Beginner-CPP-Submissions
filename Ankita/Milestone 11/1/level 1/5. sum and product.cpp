#include <iostream>
using namespace std;
int main ()
{
    int a[99], sum = 0, pro = 1, n, l;
    cout << "Enter the length of array: ";
    cin >> l;
    cout << "Enter the elements of array.\n";
    for (n = 0; n < l; n++)
    {
        cout << n << " element: ";
        cin >> a[n];
        sum += a[n];
        pro *= a[n];
    }
    cout << "Product = " << pro << "\n" << "Sum = " << sum;
}
