#include <iostream>
using namespace std;
int main ()
{
    int a[99], i, o = 0, e = 0, l;
    cout << "Enter the size of array: ";
    cin >> l;
    for (i = 0; i < l; i++)
    {
        cout << "Enter " << i << " element: ";
        cin >> a[i];
        if (a[i]%2 == 0)
            e++;
        else
            o++;
    }
    cout << "Total number even elements = " << e << "\nTotal number of odd elements = " << o;
}
