/*
Write a program to print the pattern:

input :5

output:

4 3 2 1 0
3 2 1 0
2 1 0
1 0
0

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
            printf("%d ",n-j);
        }
        printf("\n");
    }

    return 0;
}