#include <iostream>
using namespace std;
int main ()
{
    int a[99], b[99];
    int n, l, p = 0, q = 0, o = 1;
    cout << "Enter any array\n";
    cout << "Enter the length of array: ";
    cin >> l;
    for(n = 0; n < l; n++)
    {
        cout << "Enter a[" << n << "]: ";
        cin >> a[n];
        cout << "\n";
    }
    for (n = 0; n < l; n++)
    {
        for (int g = 0; g < q; g++)
        {
           if (n == b[g])
           {
               o = 0;
               break;
           }
        }
        if (o == 1)
        {
                for (int k = 0; k<l ; k++)
        {
            if (a[n] == a[k])
            {
                p++;
                b[q] = k;
                q++;
            }
        }
            cout << "Frequency of " << a[n] << " is " << p << "\n";
        }
        p = 0;
        o = 1;
    }

}
