/*
Write a program to print the pattern:

input :5

output:

1
6 2
10 7 3
13 11 8 4
15 14 12 9 5

*/
#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: "); scanf("%d",&n);

    int k = 1, m = 0;

    for(int i = 1; i <= n; i++)
    {
        for(int j = i; j >= 1; j--)
        {
            printf("%d ",k - m);
            m += n - j + 1;
        }
        k += n - i + 1;
        m = 0;
        printf("\n");
    }

    return 0;
}