#include<stdio.h>

int main()
{
    int n ;
    printf("Enter the no : ");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++)
    {
      for(int j=1;j<=n;j++)
       {
         if(i==j)
          printf("%d",i);
         else 
          printf(" ");
         
       }
      for(int j=1;j<=n;j++)
    {
        if(i+j==n)
          printf("%d",i);
         else
          printf(" ");
        }
         printf("\n");
    }
    for(int i=1;i<n;i++)
    {
      for(int j=1;j<=n;j++)
       {
         if(i+j==n)
          printf("%d",n-i);
         else 
          printf(" ");
         
       }
      for(int j=1;j<=n;j++)
    {
        if(i==j)
          printf("%d",n-i);
         else
          printf(" ");
        }
         printf("\n");
    }
}