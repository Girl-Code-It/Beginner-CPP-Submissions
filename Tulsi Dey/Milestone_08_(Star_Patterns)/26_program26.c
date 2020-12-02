/*
Write a program to print the pattern:

input :5

output:

A
BA
CBA
DCBA
EDCBA

*/
#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: "); scanf("%d",&n);

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            printf("%c",i-j+'A');
        }
        printf("\n");
    }

    return 0;
}