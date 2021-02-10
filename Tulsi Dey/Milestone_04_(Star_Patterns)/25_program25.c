/*
Write a program to print the pattern:

input :5

output:

                    0 
                  1 2 1
                2 3 4 3 2 
              3 4 5 6 5 4 3
            4 5 6 7 8 7 6 5 4
          5 6 7 8 9 0 9 8 7 6 5 
        6 7 8 9 0 1 2 1 0 9 8 7 6
      7 8 9 0 1 2 3 4 3 2 1 0 9 8 7
    8 9 0 1 2 3 4 5 6 5 4 3 2 1 0 9 8
  9 0 1 2 3 4 5 6 7 8 7 6 5 4 3 2 1 0 9
0 1 2 3 4 5 6 7 8 9 0 9 8 7 6 5 4 3 2 1 0 
  9 0 1 2 3 4 5 6 7 8 7 6 5 4 3 2 1 0 9
    8 9 0 1 2 3 4 5 6 5 4 3 2 1 0 9 8 
      7 8 9 0 1 2 3 4 3 2 1 0 9 8 7
        6 7 8 9 0 1 2 1 0 9 8 7 6
          5 6 7 8 9 0 9 8 7 6 5
            4 5 6 7 8 7 6 5 4
              3 4 5 6 5 4 3
                2 3 4 3 2
                  1 2 1
                    0


*/
#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: "); scanf("%d",&n);
    int k;

    for(int i = 0; i <= n+1; i++)
    {
        for(int j = i; j < n+1; j++)
        {
            printf("  ");
        }
        for(int j = 0; j < i; j++)
        {
            k = i+j-1;
            if(k >= 10) k = k%10;
            printf("%d ",k);
        }
        for(int j = 1; j < i; j++)
        {
            k = 2*i-j-2;
            if(k >= 10) k = k%10;
            printf("%d ",k);
        }
        printf("\n");
    }
     for(int i = n; i >= 0; i--)
    {
        for(int j = i; j < n+1; j++)
        {
            printf("  ");
        }
        for(int j = 0; j < i; j++)
        {
            k = i+j-1;
            if(k >= 10) k = k%10;
            printf("%d ",k);
        }
        for(int j = 1; j < i; j++)
        {
            k = 2*i-j-2;
            if(k >= 10) k = k%10;
            printf("%d ",k);
        }
        printf("\n");
    }

    return 0;
}