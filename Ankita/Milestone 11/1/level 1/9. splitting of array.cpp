#include <iostream>
using namespace std ;
int main ()
{
    int a[10], h1[5], h2[5], i, n;
    for (n = 0; n < 10; n++)
    {
        cout << "Enter " << n << " element: ";
        cin >> a[n];
        if (n < 5)
            h1[n] = a[n];
        else if (n >= 5)
            h2[n-5] = a[n];
    }
    for (n = 0; n < 10; n++)
    {
        if (n < 5)
        {
            cout << h1[n] << "\t";
        }
        else if (n >= 5)
        {
            if (n == 5)
                cout << "\n";
            cout << h2[n-5] << "\t";

        }
    }

}
