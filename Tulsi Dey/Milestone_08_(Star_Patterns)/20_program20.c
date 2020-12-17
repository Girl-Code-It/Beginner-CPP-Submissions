/*
Write a program to print the pattern:

input :5

output:

    A1
   AB12
  ABC123
 ABCD1234
ABCDE12345

*/
#include <stdio.h>

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
            printf(" ");
        }
        for(int j = 1; j <= i; j++)
        {
            printf("%c",'A'+j-1);
        }
        for(int j = 1; j <= i; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }

    return 0;
}