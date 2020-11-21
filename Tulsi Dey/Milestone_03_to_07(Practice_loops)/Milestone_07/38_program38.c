/*
Write a C program to convert Hexadecimal to Binary number system.

*/
#include <stdio.h>
#include <math.h>
#include <string.h>

void getBinary(int n)
{
    int bin[20];
    int i = 0, copy = n;
     
    while(n > 0)
    {
        bin[i] = n%2;
        n /= 2;
        i++;
    }

    printf("\nBinary : ",copy);
    for(int j = i - 1; j >= 0; j--)
    printf("%d",bin[j]);

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
    getBinary(getDecimal(n));

    return 0;
}