/*
Write a C program to find two's complement of a binary number.

*/
#include <stdio.h>
#include <string.h>

void getTwosComplement(char *n)
{
    char a[20] = "";

    for(int i = 0; i < strlen(n); i++)
    {
        if(n[i] == '1') a[i] = '0';
        else a[i] = '1';
    }
    
    int k;
    for(k = strlen(a) - 1; k >= 0; k--)
    {
        if(a[k] == '1') a[k] = '0';
        else
        {
            a[k] = '1';
            break;
        }
    }
    int l = strlen(a);
    if(k == -1) {
        a[0] = '1';
        for(int i = 0; i < l; i++)
        a[i+1] = a[i];
    }
    printf("two's complement of %s is %s",n,a);



}
int main()
{
    char n[20];
    printf("Enter the number: "); gets(n);

    getTwosComplement(n);

    return 0;
} 