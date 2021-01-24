/*
Write a program to print the pattern:

input :5

output:

1 2 3 4 5 6 7 8 9
1 2 3 4 5 6 7
1 2 3 4 5
1 2 3
1

*/

#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: "); scanf("%d",&n);

    for(int i = n; i >= 1; i--)
    {
        for(int j = 1; j <= 2*i - 1; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}