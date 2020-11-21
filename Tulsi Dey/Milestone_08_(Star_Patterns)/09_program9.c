/*
Write a program to print the pattern:

input :5

output:

A B C D E D C B A
A B C D   D C B A
A B C       C B A
A B           B A
A               A

*/
#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: "); scanf("%d",&n);

    for(int i = 1; i <= n; i++)
    {
        for(int j = i; j <= n; j++)
        {
            printf("%c ",j - i +'A');
        }
        for(int j = 1; j < 2*i - 1; j++)
        {
            if(j == 1) printf("");
            else printf("  ");
        }
        for(int j = i; j <= n; j++)
        {
            if(j == 1) printf("");
            else printf("%c ",n - j+'A');
        }
        printf("\n");
    }

    return 0;
}