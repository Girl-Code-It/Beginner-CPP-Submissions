/*
Write a C program to find one's complement of a binary number.

*/
#include <stdio.h>
#include <string.h>

void getOnesComplement(char *n)
{
    char a[20] = "";

    for(int i = 0; i < strlen(n); i++)
    {
        if(n[i] == '1') a[i] = '0';
        else a[i] = '1';
    }

    printf("one's complement of %s is %s",n,a);

}
int main()
{
    char n[20];
    printf("Enter the number: "); gets(n);

    getOnesComplement(n);

    return 0;
}