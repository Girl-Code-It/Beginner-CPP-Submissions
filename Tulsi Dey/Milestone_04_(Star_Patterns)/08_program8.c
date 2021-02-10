/*
Write a program to print the pattern:

input :5

output:

        1
      1 2 1
    1 2 3 2 1
  1 2 3 4 3 2 1
1 2 3 4 5 4 3 2 1

*/
#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("Enter a number: "); scanf("%d",&n);

    int half;
    if(n%2 == 0) half = n/2;
    else half = n/2 + 1;

    for(int i = 1; i <= n; i++)
    {
        for(int j = i; j < n; j++)
        {
            printf("  ");
        }
        for(int j = 1; j <= i; j++)
        {
            printf("%d ",j);
        }
        for(int j = 2; j <= i; j++)
        {
            printf("%d ",1 - j + i );
        }
        printf("\n");
    }

    return 0;
}