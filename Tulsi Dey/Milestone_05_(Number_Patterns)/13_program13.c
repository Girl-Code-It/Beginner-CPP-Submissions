/*
Write a program to print the pattern:

input :5

output:

5 5 5 5 5
4 4 4 4
3 3 3
2 2
1

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
            printf("%d ", n - i + 1);
        }
        printf("\n");
    }

    return 0;
}