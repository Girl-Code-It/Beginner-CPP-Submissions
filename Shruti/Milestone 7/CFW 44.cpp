#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int octalvalues[] = {0, 1, 10, 11, 100, 101, 110, 111};
    int hexadecimal[] = {0, 1, 10, 11, 100, 101, 110, 111, 1000, 1001, 1010, 1011, 1100, 1101, 1110, 1111};

    long long binary = 0, place = 1;
    int octal, digit, dig, index, i;
    char hex[20];

    cout<<"\n Enter an octal value: ";
    cin>>octal;

    while(octal!=0)
    {
        digit = octal % 10;
        binary += (octalvalues[digit])*place;
        place*=1000;
        octal/=10;
    }

    while(binary!=0)
    {
        dig = binary % 10000;

        for(i=0; i<16; i++)
        {
            if(hexadecimal[i] == dig)
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
