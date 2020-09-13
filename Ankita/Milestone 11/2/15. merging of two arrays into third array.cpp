#include <iostream>
using namespace std;
int main ()
{
    int a[] = {1,2,3,4,5,6,7,8,9}, b[] = {10,11,12,13,14,15,16,17,18,19}, c[(sizeof(a)+sizeof(b))/4];
    for (int n = 0; n < (sizeof(a)+sizeof(b))/4; n++)
    {
        if (n < sizeof(a)/4)
            c[n] = a[n];
        else
            c[n] = b[n-9];
        cout << c[n] << "\t";
    }
}
