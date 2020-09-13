#include <iostream>
using namespace std;
int add (int i, int l, int *a, int sum)
{
    if (i < l)
    {
        cout << "Enter " << i << " element: ";
        cin >> a[i];
        sum = sum + a[i];
        add (i += 1, l, a, sum);
    }
    else
        cout << "SUM = " << sum;

}
int main ()
{
    int l, i = 0, a[99], sum = 0;
    cout << "Enter the size of array: ";
    cin >> l;
    add (i, l, a, sum);
}
