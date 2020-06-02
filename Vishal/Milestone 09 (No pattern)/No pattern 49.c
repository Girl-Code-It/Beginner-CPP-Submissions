#include<stdio.h>

int main()
{
   int n,diff,k;
   printf("Enter the no of rows : ");
   scanf("%d",&n);

   for(int i=1;i<=n;i++)
   {
        k = i;
        diff = n-1;
      for(int j=0;j<i;j++)
        {     
           printf("%d ",k);
           k+=diff;
           diff--;
        }
          
        printf("\n");
   }

    return 0;
}