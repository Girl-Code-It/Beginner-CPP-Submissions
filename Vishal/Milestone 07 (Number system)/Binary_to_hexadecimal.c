#include <stdio.h>
#include<string.h>

void main()
{
    int hexConstant[] = {0, 1, 10, 11, 100, 101, 110, 111, 1000, 
                         1001, 1010, 1011, 1100, 1101, 1110, 1111};

    long long binary, tempBinary;
    char hex[20];
    int index, i, digit;
    
    /* Input binary number from user */
    printf("Enter binary number: ");
    scanf("%lld", &binary);
    
    /* Copy binary number to temp variable */
    tempBinary = binary;
    index = 0;
    
    /* Find hexadecimal of binary number */
    while(tempBinary!=0)
    {
        /* Group binary to last four digits */
        digit = tempBinary % 10000;

        /* Find hexadecimal equivalent of last four digit */
        for(i=0; i<16; i++)
        {
            if(hexConstant[i] == digit)
            {
                if(i<10)
                {
                    /* 0-9 integer constant */
                    hex[index] = (char)(i + 48);
                }
                else
                {
                    /* A-F character constant */
                    hex[index] = (char)((i-10) + 65);
                }

                index++;
                break;
            }
        }

        /* Remove the last 4 digits as it is processed */
        tempBinary /= 10000;
    }
    hex[index] = '\0';
    printf("Binary number = %lld\n", binary);  
    printf("Hexadecimal number = ");
    for(int i = index-1; i >= 0;i--)
    printf("%c",hex[i]);

}