#include<stdio.h>

int main()
{    int n;
     printf("Enter the no of rows \n");
     scanf("%d",&n);
     for(int i=1;i<=n;i++)
    {    int j=0;
        for(int space=1;space<=(n-i);space++)
        {  
           printf("  ");
        }
        for(int j=1;j<=n;j++)
        {
        if(i==1||i==n||j==1||j==n)
         printf("* ");
        else
        printf("  ");
        }
         
        printf("\n");
    }
    return 0;
}