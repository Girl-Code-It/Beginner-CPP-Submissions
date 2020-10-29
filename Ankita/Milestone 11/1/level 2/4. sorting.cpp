#include <iostream>
using namespace std ;
void sorting(int *a, int l, int sm)
{
    int n, t;
    if (sm < l){

        for (n = sm; n < l; n++)
        {
            if (a[n] < a[sm - 1])
            {
                t = a[n];
                a[n] = a[sm - 1];
                a[sm - 1] = t;
            }
        }
        sorting(a,  l,  sm+1);

    }

    else
    {
        for (n = 0; n < l; n++)
        {
            cout << a[n] << "\t";
        }
    }

}
int main ()
{
    int a[99], b[99], i = 0, n, l, sm = 1;
    cout << "Enter the size of array: ";
    cin >> l;
    for (n = 0; n < l; n++)
    {
        cout << "Enter " << n << " element: ";
        cin >> a[n];
    }
    cout << "Sorted array:\n";
    sorting (a, l, sm);
}
