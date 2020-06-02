#include <iostream>
#include <string.h>
using namespace std;
int main ()
{
    int decimal, k;
    char refer[] = "0123456789ABCDEF", hex[55];
    cout << "Enter any decimal number: ";
    cin >> decimal;
    int i = 0;
    while (decimal > 0)
    {
        k = decimal % 16;
        hex[i] = refer[k];
        decimal /= 16;
        i++;
    }
    hex[i] = '\0';
    strrev(hex);
    cout << "Hexadecimal number = " << hex;
}
