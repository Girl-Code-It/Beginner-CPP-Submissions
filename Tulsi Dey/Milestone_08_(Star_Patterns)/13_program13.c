/*
Write a program to print the pattern:

input :5

output:

    1
   232
  34543
 4567654
567898765

*/
#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: "); scanf("%d",&n);

    for(int i = 1; i <= n; i++)
    {
        for(int j = i; j < n; j++)
        {
            printf(" ");
        }
        for(int j = 1; j <= i; j++)
        {
            printf("%d",i+j-1);
        }
        for(int j = 2; j <= i; j++)
        {
            printf("%d",2*i-j);
        }
        printf("\n");
    }

    return 0;
}