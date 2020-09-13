#include <iostream>
using namespace std;
int main ()
{
    int a[20], n, p = 0, neg = 0, e = 0, o = 0, z = 0;
    for (n = 0; n <20; n++)
    {
        cout << "enter a number: ";
        cin >> a[n];
        if (a[n] > 0)
            p++;
        else if (a[n] < 0)
            neg++;
        if (a[n]%2 == 0)
            e++;
        else if (a[n]%2 != 0)
            o++;
        if (a[n] == 0)
            z++;
    }
    cout << "number of positive numbers: " << p << "\n";
    cout << "number of negative numbers: " << neg << "\n";
    cout << "number of even numbers: " << e - z << "\n";
    cout << "number of odd numbers: " << o << "\n";
    cout << "number of 0: " << z << "\n";

}
