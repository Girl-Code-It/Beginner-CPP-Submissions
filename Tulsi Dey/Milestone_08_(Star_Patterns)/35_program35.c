/*
Write a program to print the pattern using single loop:

input :5

output:

    *
   * *
  * * *
 * * * *
* * * * *

*/
#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: "); scanf("%d",&n);
    
    int i = n, k = 0;

    while(i >= 0)
    {
        if(k == n+1) break;
        if(i == 0)
        {
            printf("\n");
            k++; i = n;
            continue;
        }
        else if(i > k) printf(" ");
        else printf("* ");
        i--;
    }

    return 0;
}