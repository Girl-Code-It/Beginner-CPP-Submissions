/*
Write a C program to convert Hexadecimal to Decimal number system.

*/
#include <stdio.h>
#include <math.h>
#include <string.h>

void getDecimal(char *n)
{
    int dec = 0;

    for(int i = 0; i < strlen(n); i++)
    {
        if(n[strlen(n)-1-i]-'A' >= 0) dec += (n[strlen(n)-1-i] - 'A'+ 10) * pow(16,i);
        else dec += (n[strlen(n)-1-i] - '0') * pow(16,i);
    }
    
    printf("\nDecimal: %d",dec);

}
int main()
{
    char n[20];
    printf("Enter the number: "); gets(n);

    printf("\nHexadecimal: %s",n);
    getDecimal(n);

    return 0;
}

