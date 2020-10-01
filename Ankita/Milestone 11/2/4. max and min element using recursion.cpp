#include <iostream>
using namespace std;
void m(int i, int l, int smallest, int largest, int *a)
{
    if (i < l)
    {
        if (a[i] < smallest)
            smallest = a[i];
        if (a[i] > largest)
            largest = a[i];
        m (i += 1, l, smallest, largest, a);
    }
    else
        cout << "Maximum element = " << largest << "\nMinimum element = " << smallest;
}
int main ()
{
    int l, i = 0, n, a[99];
    cout << "Enter the size of array: ";
    cin >> l;
    for (n = 0; n < l; n++)
    {
        cout << "Enter " << n << " element : ";
        cin >> a[n];
    }
    int smallest = a[0], largest = a[0];
    m (i, l, smallest, largest, a);
}
