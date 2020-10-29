#include <iostream>
using namespace std;
int main ()
{
    int a[10] = {1,2,3,4,5,6,7,8,9,10}, b[99], n;
    for (n = 0; n < sizeof(a)/4; n++)
    {
        b[n] = a[n];
        cout << b[n] << "\t";
    }
}
