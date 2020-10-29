#include <iostream>
#include <string.h>
using namespace std;
int main ()
{
    int decimal, k;
    char binary[65] = "";
    cout << "Enter any decimal number: ";
    cin >> decimal;
    int i = 0;
    while (decimal > 0)
    {
        binary[i] =  decimal % 2 + '0' ;
        i++;
        decimal /= 2;
    }
    binary[i] = '\0';
    strrev(binary);

    cout << "BINARY NUMBER = " << binary;
}
