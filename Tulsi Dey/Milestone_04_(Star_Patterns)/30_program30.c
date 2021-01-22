/*
Write a program to print the pattern:

input :5

output:

             *
          *  *
       *  *  *
       |  *  *
 *     |     *
 *  *  |
 *  *  *
 *  *
 *

*/
#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: "); scanf("%d",&n);
    int half;

    if(n%2 == 0) half = n/2;
    else half = n/2 + 1;

    for(int i = 1; i <= half; i++)
    {
        for(int j = 1; j < half; j++)
        {
            printf("   ");
        }
        for(int j = i; j < half; j++)
        {
            printf("   ");
        }
        for(int j = 1; j <= i; j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
    for(int i = 1; i <= half; i++)
    {
        for(int j = 1; j < i; j++)
        {
            printf(" * ");
        }
        for(int j = i; j < half; j++)
        {
            printf("   ");
        }
        printf(" | ");
        for(int j = 1; j < i; j++)
        {
            printf("   ");
        }
        for(int j = i; j < half; j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
    for(int i = 1; i <= half; i++)
    {
        for(int j = i; j <= half; j++)
        {
            printf(" * ");
        }
        for(int j = i; j < half; j++)
        {
            printf("   ");
        }
        printf("\n");
    }

    return 0;
}