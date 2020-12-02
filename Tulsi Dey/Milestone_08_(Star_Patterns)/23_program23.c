/*
Write a program to print the pattern:

input :5

output:

1
1 0
1 0 1
1 0 1 0
1 0 1 0 1

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
            printf("%d ",j%2);
        }
        printf("\n");
    }

    return 0;
}