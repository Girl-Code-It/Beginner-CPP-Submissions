/*
Write a program to print the pattern:

input :5

output:

        A
      C B
    F E D
  J I H G
O N M L K

*/
#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: "); scanf("%d",&n);
    int k = 0, m = 0;

    for(int i = 1; i <= n; i++)
    {
        m = k+i;
        for(int j = i; j < n; j++)
        {
            printf("  ");
        }
        for(int j = 1; j <= i; j++)
        {
            printf("%c ",'A' + m-- - 1);
            k++;
        }
        printf("\n");
    }

    return 0;
}