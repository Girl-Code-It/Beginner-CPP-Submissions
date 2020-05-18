#include <iostream>
#include <string.h>
using namespace std;
int main ()
{
    long long int octal, binary = 0, refer[] = {0, 1, 10, 11, 100, 101, 110, 111}, k, m;
    char hexadec[15] = "";
    cout << "Enter any octal number: " ;
    cin >> octal;
    int place = 1;
    int tempoctal = octal;
    while (tempoctal > 0)
    {
        k = tempoctal % 10;
        binary = refer[k]*place + binary;
        place *= 1000;
        tempoctal /= 10;
    }
    cout << "Binary number = " << binary << endl;

    while (binary > 0)
    {
        m = binary % 10000;
        switch (m)
        {
            case 0:
                strcat (hexadec, "0");
                break;
            case 1:
                strcat (hexadec, "1");
                break;
            case 10:
                strcat (hexadec, "2");
                break;
            case 11:
                strcat (hexadec, "3");
                break;
            case 100:
                strcat (hexadec, "4");
                break;
            case 101:
                strcat (hexadec, "5");
                break;
            case 111:
                strcat (hexadec, "7");
                break;
            case 1000:
                strcat (hexadec, "8");
                break;
            case 1001:
                strcat (hexadec, "9");
                break;
            case 1010:
                strcat (hexadec, "A");
                break;
            case 1011:
                strcat (hexadec, "B");
                break;
            case 1100:
                strcat (hexadec, "C");
                break;
            case 1101:
                strcat (hexadec, "D");
                break;
            case 1110:
                strcat (hexadec, "E");
                break;
            case 1111:
                strcat (hexadec, "F");
                break;
        }
        binary /= 10000;
    }
    strrev(hexadec);
    cout << "Hexadecimal number = " << hexadec;
}
