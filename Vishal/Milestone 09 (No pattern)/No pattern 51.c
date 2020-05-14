#include<stdio.h>

void main()
{
   int n,k=1;
   printf("Enter the no of rows : ");
   scanf("%d",&n);
    
   for(int i=1;i<=n;i++)
   {      
      for(int j=0;j<i;j++)
        {   
           if(i%2!=0)
                printf("%d ",k) ;
                k++;  
        }
      for(int j=0;j<i;j++) 
      {
        if(i%2==0)         
        printf("%d ",k-j-1); 
      }
        printf("\n");      
   } 
} 