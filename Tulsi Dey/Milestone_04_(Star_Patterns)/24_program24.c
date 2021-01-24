/*
Write a program to print the pattern:

input: 7

output:

 *  *  *  *  *  *  *
 *                 *
 *     *  *  *     *
 *     *     *     *
 *     *  *  *     *
 *                 *
 *  *  *  *  *  *  *


(NOTE : Enter a number greater than 5)

*/
#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: "); scanf("%d",&n);
    if (n%2 == 0) n++;

    for(int i = 1; i <= n; i++)
    {   
        if(i == 1 || i == n)
        for(int j = 1; j <= n; j++) printf(" * ");
        else if(i < n/2  || i >  n/2 + 2 )
        {
            printf(" * ");
            for(int j = 1; j < n - 1; j++)
            {
                printf("   ");
            }
            printf(" * ");
        }
        else 
        {
            printf(" * ");
             for(int j = 1; j < (n - 3)/2; j++)
            {
                printf("   ");
            }
            for(int j = 1; j <= 3; j++)
            {
                if(i == (n - 3)/2 + 2 && j ==  2 ) printf("   ");
                else printf(" * ");
            }
            for(int j = 1; j < (n - 3)/2; j++)
            {
                printf("   ");
            }
            printf(" * ");
        }
        
        printf("\n");
    }

    return 0;
}