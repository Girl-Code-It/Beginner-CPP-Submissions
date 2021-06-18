/*
Write a program to print the pattern:

input :5

output:

1 2 3 4 5
4 3 2 1
1 2 3
2 1
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
            if(i%2 != 0)
            printf("%d ", j - i + 1);
            else
            printf("%d ", n - j + 1);
        }
        printf("\n");
    }

    return 0;
}