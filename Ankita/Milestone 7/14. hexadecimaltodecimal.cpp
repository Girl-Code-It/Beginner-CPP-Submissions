#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;
int main ()
{
    char hex[67] = "";
    int decimal, i, length, coef;
    cout << "Enter any hexadecimal number = ";
    cin >> hex;
    length = strlen(hex) - 1;
    decimal = 0;
    for (i = 0; i < strlen(hex); i++)
    {
        if (hex[i] <= '9')
        {
            coef = hex[i] - 48;
        }
        else
        {
            switch (hex[i])
            {
                case 'a':
                case 'A':
                    coef = 10;
                    break;
                case 'b':
                case 'B':
                    coef = 11;
                    break;
                case 'c':
                case 'C':
                    coef = 12;
                    break;
                case 'd':
                case 'D':
                    coef = 13;
                    break;
                case 'e':
                case 'E':
                    coef = 14;
                    break;
                case 'f':
                case 'F':
                    coef = 15;
                    break;
            }
        }
        decimal = coef * pow(16,length ) + decimal;
        length --;

    }
    cout << "DECIMAL NUMBER = " << decimal;
}
