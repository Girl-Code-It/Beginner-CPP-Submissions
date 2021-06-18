/*
Write a program to print the pattern:

input :5

output:

* * * * * * * * *
* * * *   * * * *
* * *       * * *
* *           * *
*               *

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
            printf("* ");
        }
        for(int j = 1; j < 2*i - 1; j++)
        {
            if(j == 1) printf("");
            else printf("  ");
        }
        for(int j = i; j <= n; j++)
        {
            if(j == 1) printf("");
            else printf("* ");
        }
        printf("\n");
    }

    return 0;
}