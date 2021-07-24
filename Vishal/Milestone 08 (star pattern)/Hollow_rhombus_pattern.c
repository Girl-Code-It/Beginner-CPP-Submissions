#include<stdio.h>

int main(){

    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2*n-1-i; j++)
        {
            if((i == 0 || i == n-1) && j >= n-1-i)
                printf("* ");
            else if(j == n-1-i || j == 2*n-2-i)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    
    return 0;
}