/*
Write a program to print the pattern:

input :5

output:

    1
   212
  32123
 4321234
543212345

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
            printf("%d",i-j+1);
        }
        for(int j = 2; j <= i; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }

    return 0;
}