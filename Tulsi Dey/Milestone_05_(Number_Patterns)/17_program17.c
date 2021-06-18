/*
Write a program to print the pattern:

input :5

output:

1 
2 4 
1 3 5
2 4 6 8
1 3 5 7 9

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
            if(i%2 != 0) printf("%d ",2*j - 1);
            else printf("%d ", 2*j);
        }
        printf("\n");
    }

    return 0;
}