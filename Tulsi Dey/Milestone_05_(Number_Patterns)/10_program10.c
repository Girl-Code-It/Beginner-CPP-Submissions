/*
Write a program to print the pattern:

input :5

output:

5
4 4
3 3 3
2 2 2 2
1 1 1 1 1

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
            printf("%d ", n - i + 1);
        }
        printf("\n");
    }

    return 0;
}