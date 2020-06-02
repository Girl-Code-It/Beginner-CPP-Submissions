#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
    int decimal = 0, i, k, digit, num, binary;
    cout << "Enter any binary number: " ;
    cin >> binary;
    num = binary;
    k = 0;
    for (i = 0; i<8; i++)
    {
        digit = binary % 10;
        k = digit * pow(2,i);
        decimal = decimal + k;
        binary = binary/10;
    }
    cout << "Decimal number corresponding to " << num << " is: " << decimal;
}
