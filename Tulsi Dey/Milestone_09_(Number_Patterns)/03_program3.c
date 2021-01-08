/*
Write a program to print the pattern:

input :5

output:

1 2 3 4 5
1 2 3 4
1 2 3
1 2
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
            printf("%d ", j - i + 1);
        }
        printf("\n");
    }

    return 0;
}