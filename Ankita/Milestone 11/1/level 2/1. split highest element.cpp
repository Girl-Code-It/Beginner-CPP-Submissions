#include <iostream>
using namespace std;
int main ()
{
    int a[99], n, i, l, s;
    cout << "Enter the size array: ";
    cin >> l;
    for(n = 0; n < l; n++)
    {
        cout << "Enter " << n << " element: ";
        cin >> a[n];
    }
    int largest = a[0];
    for (n = 0; n < l; n++)
    {
        if (largest < a[n])
        {
             largest = a[n];
             i = n;
        }
    }
    int secondLargest;
    if (i == l-1)
        secondLargest = a[i-1];
    else
        secondLargest = a[i+1];
    for (n = 0; n < l; n++)
    {
        if (a[n] < largest)
        {
            if (a[n] > secondLargest)
                secondLargest = a[n];
        }
    }
    for (n = l; n >= i; n--)
    {
        if (n == i)
            a[n] = secondLargest;
        else if (n == i+1)
            a[n] = largest - secondLargest;
        else
            a[n] = a[n-1];
    }
    for (n = 0; n <= l; n++)
    {
        cout << a[n] << "\t";
    }
}
