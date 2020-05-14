#include<stdio.h>

void main()
{
   int n;
   printf("Enter the no rows : ");
   scanf("%d",&n);
 for(int i=1;i<=n;i++)
 {  
     for(int j=1;j<=i;j++)
       {   
           printf("%d ",j); 
           
       }      
     for(int j=2*i-3;j>=1;j--)
       {   if(i>j)
           printf("%d ",j);      
       }     
          printf("\n");
 }
 for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        printf("%d ",j);
        for(int j=n-1-i;j>=1;j--)
        printf("%d ",j);
      
        printf("\n");
     }
 
} 