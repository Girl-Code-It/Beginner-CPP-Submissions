/*
Write a program to print the pattern:

input :5

output:

0
0 1
0 2 4
0 3 6 9
0 4 8 12 16

*/
#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: "); scanf("%d",&n);

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            printf("%d ",i*j);
        }
        printf("\n");
    }

    return 0;
}