#include <iostream>
using namespace std;
int main ()
{
    int a[10], b[10], n, i = 0;
    for (n = 0;n < 10; n++)
    {
        cout << "enter a number: ";
        cin >> a[n];
    }
    cout << "In reversed order\n";
    for (n = 9; n >= 0; n--)
    {
        b[i] = a[n];
        cout << "--> " << b[i] << "\n";
        i++;
    }
}
