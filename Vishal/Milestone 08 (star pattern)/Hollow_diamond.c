#include<stdio.h>

int main()
{    int n;
     printf("Enter the no of rows\n");
     scanf("%d",&n);
     for(int i =0;i<=n;i++)
    {  
           for(int k= 0;k<=n;k++)
        {
           if(i+k<=n)
           printf("*");
           else
           printf(" ");
        }    
           for(int j= 0;j<=n;j++)
        {
           if(j>=i)
           printf("*");
           else
           printf(" ");
        }  
        printf("\n");
    }
     for(int i =0;i<=n;i++)
    {    
        for(int c= 0;c<=n;c++)
        {
           if(c<=i)
           printf("*");
           else
           printf(" ");
        }  
        for(int j= 0;j<=n;j++)
        {
           if(j+i<=n-1)
           printf(" ");
           else
           printf("*");
        }  
        printf("\n");  
    } 
    return 0;
}