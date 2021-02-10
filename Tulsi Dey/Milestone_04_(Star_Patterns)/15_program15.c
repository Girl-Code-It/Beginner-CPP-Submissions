/*
Write a program to print the pattern:

input :5

output:

    1
   12
  123
 1234
12345
 1234
  123
   12
    1

*/
#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: "); scanf("%d",&n);

    for(int i = 1; i <= n; i++)
    {
        for(int j = i; j < n; j++)
        {
            printf(" ");
        }
        for(int j = 1; j <= i; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    for(int i = n - 1; i >= 1; i--)
    {
        for(int j = i; j < n; j++)
        {
            printf(" ");
        }
        for(int j = 1; j <= i; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }

    return 0;
}