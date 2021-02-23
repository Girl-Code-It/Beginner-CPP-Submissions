/*
Write a program to print the pattern:

input :5

output:
1 1 1 1 1
2 2 2 2
3 3 3
4 4
5
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
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}