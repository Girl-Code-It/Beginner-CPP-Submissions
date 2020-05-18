#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
    int octal, decimal;
    cout << "Enter any octal number: ";
    cin >> octal;
    int i = 0, k;
    decimal = 0;
    while (octal > 0)
    {
        k = octal % 10;
        decimal += k*pow(8,i);
        i++;
        octal /= 10;
    }
    cout << "Decimal number = " << decimal;
}
