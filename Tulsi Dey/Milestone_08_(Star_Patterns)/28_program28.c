/*
Write a program to print the pattern:

input :5

output:

1
3 * 2
4 * 5 * 6
10 * 9 * 8 * 7
11 * 12 * 13 * 14 * 15

*/
#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: "); scanf("%d",&n);
    int k = 1, m = 1;
    for(int i = 1; i <= n; i++)
    {
        if(i%2 != 0)
        {
            
            for(int j = 0; j < i; j++)
            {
                printf("%d ",k++);
                if(j != i - 1) printf("* ");
            }
            m = k+i;
        }
        else
        {
            for(int j = 0; j < i; j++)
            {
                printf("%d ",m--);
                if(j != i - 1) printf("* ");
                k++;
            }
        }

        
        printf("\n");
    }

    return 0;
}