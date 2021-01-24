/*
Write a program to print the pattern:

input :5

output:

1
0 1
1 0 1
0 1 0 1

*/
#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: "); scanf("%d",&n);

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j < i; j++)
        {
            if((n-(i-j))%2 == 0) printf("%d ", 1);
            else printf("%d ",0);
        }
        printf("\n");
    }

    return 0;
}