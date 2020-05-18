#include <iostream>
#include <string.h>
using namespace std;
int main ()
{
    int decimal;
    char octal[55] = "";
    cout << "Enter any decimal number: ";
    cin >> decimal;
    int i = 0;
    while (decimal > 0)
    {
        octal[i] = decimal % 8 + '0';
        i++;
        decimal /= 8;
    }
    octal[i] = '\0';
    strrev(octal);
    cout << "Octal number = " << octal;
}
