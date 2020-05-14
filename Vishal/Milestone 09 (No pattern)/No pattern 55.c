#include<stdio.h>

void main()
{
   int n;
   printf("Enter the no rows : ");
   scanf("%d",&n);
   
   for(int i =1;i<=2*n-1;i++)
    {
      if(i<=n)
       {
          for(int j=1;j<=i;j++)
           printf("%d ",j);    
       }
    
      else
       {
            for(int j=1;j<=2*n-i;j++)
            printf("%d ",j);
       }
          
        printf("\n");
    }
} 