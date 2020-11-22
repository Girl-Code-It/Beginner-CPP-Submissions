/*
Write a C program to convert Binary to Hexadecimal number system.

*/
#include <stdio.h>
#include <math.h>
#include <string.h>

void getHex(char *n)
{
    char hex[20] = "";
    int aux;

    for(int i = 0; i < strlen(n); i++)
    {
      aux += (n[strlen(n)-1-i] - '0') * pow(2,i);
    }
    for(int i = 0; aux > 0; i++)
    {
        if(aux%16 > 9) 
        hex[i] = (aux%16 + 65 - 10);
        else
        hex[i] = (aux%16 + '0');

        aux /= 16;
    }
    
    printf("\nBinary : %s\nHexadecimal : ",n);
    for(int i = strlen(hex) - 1; i >= 0; i--)
    printf("%c",hex[i]);

}
int main()
{
    char n[20];
    printf("Enter the number: "); gets(n);

    getHex(n);

    return 0;
}