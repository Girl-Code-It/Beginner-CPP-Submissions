#include <iostream>
#include <string.h>
using namespace std;
int main ()
{
    char hex[55];
    int binary[66];
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
    cout << "Binary number = " ;
    for (int p = 0; p < k; p++)
    {cout <<  binary[p];
    }

}
