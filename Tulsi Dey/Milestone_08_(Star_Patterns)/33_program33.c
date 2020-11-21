/*
Write a program to print the pattern:

input :5

output:

A B C D E F G H I
A B C D   F G H I
A B C       G H I
A B           H I
A               I

*/
#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: "); scanf("%d",&n);

    for(int i = 1; i <= n; i++)
    {
        for(int j = n; j >= i; j--)
        {
            printf("%c ", 'A' + n - j);
        }
        for(int j = 1; j < 2*i - 1; j++)
        {
            if(j == 1) printf("");
            else printf("  ");
        }
        for(int j = i; j <= n; j++)
        {
            if(j == 1) printf("");
            else printf("%c ", 'A' + n + j - 2);
        }
        printf("\n");
    }

    return 0;
}