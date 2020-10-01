#include <iostream>
using namespace std;
int main ()
{
    int a[] = {10, 12, 20, 30, 25, 40, 32, 31, 35, 50, 60}, n, b[99];
    for (n = 2; n < 8; n++)
    {
        b[n - 2] = a[n];
        cout << b[n - 2] << "\t";
    }

}
