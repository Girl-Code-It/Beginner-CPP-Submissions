/*
Write a program to print the pattern:

input :5

output:

    1
   A B
  1 2 3
 A B C D
1 2 3 4 5

*/
#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: "); scanf("%d",&n);
    int k = 1, m = 1;
    for(int i = 1; i <= n; i++)
    {
        for(int j = i; j < n; j++)
        {
            printf(" ");
        }
        if(i%2 != 0)
        {
            
            for(int j = 0; j < i; j++)
            {
                printf("%d ", k++);
            }
        }
        else
        {
            for(int j = 0; j < i; j++)
            {
                 printf("%c ", 'A' + m++ - 1);
            }
        }
        k = 1; m = 1;
        
        printf("\n");
    }

    return 0;
}