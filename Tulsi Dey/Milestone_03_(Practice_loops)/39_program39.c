/*
Write a C program to convert Hexadecimal to Octal number system.

*/
#include <stdio.h>
#include <math.h>
#include <string.h>

void getOct(int k)
{
    char oct[20] = "";
    int aux = k;

    for(int i = 0; aux > 0; i++)
    {
        if(aux%8 > 9) 
        oct[i] = (aux%8 + 65 - 10);
        else
        oct[i] = (aux%8 + '0');

        aux /= 8;
    }
    
    printf("\nOctal : ");
    for(int i = strlen(oct) - 1; i >= 0; i--)
    printf("%c",oct[i]);

}
int getDecimal(char *n)
{
    int dec = 0;

    for(int i = 0; i < strlen(n); i++)
    {
        if(n[strlen(n)-1-i]-'A' >= 0) dec += (n[strlen(n)-1-i] - 'A'+ 10) * pow(16,i);
        else dec += (n[strlen(n)-1-i] - '0') * pow(16,i);
    }
    
    return dec;

}
int main()
{
    char n[20];
    printf("Enter the number: "); gets(n);

    printf("\nHexadecimal: %s",n);
    getOct(getDecimal(n));

    return 0;
}

