#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int hexadecimal[] = {0, 1, 10, 11, 100, 101, 110, 111, 1000, 1001, 1010, 1011, 1100, 1101, 1110, 1111};

    long long binary;
    char hex[20];
    int index=0, i, digit;

    cout<<"\n Enter a binary number: ";
    cin>>binary;

    while(binary!=0)
    {
        digit = binary % 10000;

        for(i=0; i<16; i++)
        {
            if(hexadecimal[i] == digit)
            {
                if(i<10)
                {
                    hex[index] = (char)(i + 48);
                }
                else
                {
                    hex[index] = (char)((i-10) + 65);
                }

                index++;
                break;
            }
        }

        binary /= 10000;
    }
    hex[index] = '\0';

    strrev(hex);

    cout<<"\n Hexadecimal number = "<<hex;

    return 0;
}
