/*
Write a C program to convert Binary to Decimal number system.

*/
#include <stdio.h>
#include <math.h>
#include <string.h>

void getDecimal(char *n)
{
    int dec = 0;

    for(int i = 0; i < strlen(n); i++)
    {
        dec += (n[strlen(n)-1-i] - '0') * pow(2,i);
    }
    
    printf("\nBinary : %s\nDecimal : %d ",n,dec);

}
int main()
{
    char n[20];
    printf("Enter the number: "); gets(n);

    getDecimal(n);

    return 0;
}