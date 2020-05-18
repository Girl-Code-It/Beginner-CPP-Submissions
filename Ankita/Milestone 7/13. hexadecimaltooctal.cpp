#include <iostream>
#include <string.h>
using namespace std;
int main ()
{
    char hex[55];
    long long int bin = 0, place, binary[66];
    cout << "Enter any hexadecimal number = ";
    cin >> hex;
    int i = 0, k;
    k = strlen(hex);
    while(i < k)
    {
        char m = hex[i];
        switch (m)
        {
            case '0':
                binary[i] = 0;
                break;
            case '1':
                binary[i] = 1;
                break;
            case '2':
                binary[i] = 10;
                break;
            case '3':
                binary[i] = 11;
                break;
            case '4':
                 binary[i] = 100;
                 break;
            case '5':
                 binary[i] = 101;
                 break;
            case '6':
                 binary[i] = 110;
                 break;
            case '7':
                 binary[i] = 111;
                 break;
            case '8':
                 binary[i] = 1000;
                 break;
            case '9':
                 binary[i] = 1001;
                 break;
            case 'A':
            case 'a':
                 binary[i] = 1010;
                 break;
            case 'B':
            case 'b':
                 binary[i] = 1011;
                 break;
            case 'C':
            case 'c' :
                 binary[i] = 1100;
                 break;
            case 'D':
            case 'd':
                 binary[i] = 1101;
                 break;
            case 'E':
            case 'e':
                 binary[i] = 1110;
                 break;
            case 'F':
            case 'f':
                 binary[i] = 1111;
                 break;
        }
        i++;
    }
    place = 1;
    for (int p = 0; p < k; p++)
    {
    bin = binary[p] * place + bin;
    place = place * 10000;
    }
    char octal[57] = "";
    while(bin > 0)
    {
        int mod = bin % 1000;
        switch (mod)
        {
        case 0:
            strcat (octal, "0");
            break;
        case 1:
            strcat (octal, "1");
            break;
        case 10:
            strcat (octal, "2");
            break;
        case 11:
            strcat (octal, "3");
            break;
        case 100:
            strcat (octal, "4");
            break;
        case 101:
            strcat (octal, "5");
            break;
        case 110:
            strcat (octal, "6");
            break;
        case 111:
            strcat (octal, "7");
            break;
        }
        bin /= 1000;
    }
    strrev(octal);
    cout << "Octal number = " << octal;

}

