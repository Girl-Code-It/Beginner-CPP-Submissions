#include<stdio.h>

int main()
{    int n;
     printf("Enter the no of rows \n");
     scanf("%d",&n);
     for(int i=1;i<=n;i++)
    {    int j=0;
        for(int space=1;space<=i;space++)
        {  
           printf("  ");
        }
        for(int j=1;j<=n;j++)
        {
        
         printf("* ");
        
        
        }
         
        printf("\n");
    }
    return 0;
}