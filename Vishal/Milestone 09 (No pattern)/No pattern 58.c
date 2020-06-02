#include<stdio.h>

void main()
{
   int n;
   printf("Enter the no : ");
   scanf("%d",&n);
 for(int i=0;i<=n;i++)
 {  
     for(int j=0;j<=i;j++)
       {   if(j==0)
           printf("*");
           else
           printf("%d",j); 
       }   
     for(int j=2*i-2;j>=0;j--)
       {  
          if(i>j)
           {
             if(j==0)
              printf("*");
             else
             printf("%d",j);  
           }    
       }     
          printf("\n");
 }
 for(int i=1;i<=n;i++)
    {
     for(int j=0;j<=n-i;j++)
       {
        if(j==0)
         printf("*");
        else
         printf("%d",j);
        }
        for(int j=n-1-i;j>=0;j--)
         {
           if(j==0)
            printf("*");
           else
            printf("%d",j);
         }
        printf("\n");
     }
} 