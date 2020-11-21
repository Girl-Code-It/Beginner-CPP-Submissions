/*
Write a C program to convert Octal to Hexadecimal number system.

*/
#include <stdio.h>
#include <math.h>
#include <string.h>

void getHex(int k)
{
    char hex[20] = "";
    int aux = k;

    for(int i = 0; aux > 0; i++)
    {
        if(aux%16 > 9) 
        hex[i] = (aux%16 + 65 - 10);
        else
        hex[i] = (aux%16 + '0');

        aux /= 16;
    }
    
    printf("\nHexadecimal : ");
    for(int i = strlen(hex) - 1; i >= 0; i--)
    printf("%c",hex[i]);

}
int getDecimal(char *n)
{
    int dec = 0;

    for(int i = 0; i < strlen(n); i++)
    {
        dec += (n[strlen(n)-1-i] - '0') * pow(8,i);
    }
    
    return dec;

}
int main()
{
    char n[20];
    printf("Enter the number: "); gets(n);

    printf("\nOctal: %s",n);
    getHex(getDecimal(n));

    return 0;
}