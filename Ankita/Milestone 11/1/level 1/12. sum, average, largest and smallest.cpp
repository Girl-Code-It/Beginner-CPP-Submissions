#include <iostream>
using namespace std;
int main ()
{
    float a[99], sum = 0.0;
    int i, l, n;
    cout << "Enter the size of array: ";
    cin >> l;
    for ( n = 0; n < l; n++)
    {
        cout << "Enter " << n << " element: ";
        cin >> a[n];
        sum += a[n];
    }
    cout << "Sum of all elements = " << sum << "\nAverage of all elements = " << sum/l;
    int largest = a[0], smallest = a[0];
    for (n = 0; n < l; n++)
    {
        if (a[n] < smallest)
            smallest = a[n];
        if (a[n] > largest)
            largest = a[n];
    }
    cout << "\nSmallest element = " << smallest << "\nLargest element = " << largest;
}
