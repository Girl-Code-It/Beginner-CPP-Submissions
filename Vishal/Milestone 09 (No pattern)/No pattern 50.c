#include<stdio.h>

int main()
{
   int n,diff=1,k=1;
   printf("Enter the no of rows : ");
   scanf("%d",&n);
    
   for(int i=1;i<=n;i++)
   {      
      for(int j=0;j<i;j++)
        {     
           printf("%d ",k);
           k+=diff;
           diff++;
        }
          
        printf("\n");
   }

    return 0;
}