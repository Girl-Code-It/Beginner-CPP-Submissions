/*
Write a program to print the pattern:

input :5

output:

1 3 5 7 9
3 5 7 9
5 7 9
7 9
9

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
            printf("%d ", 2*j - 1);
        }
        printf("\n");
    }

    return 0;
}