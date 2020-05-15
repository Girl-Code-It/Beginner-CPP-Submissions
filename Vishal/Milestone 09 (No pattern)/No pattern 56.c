#include<stdio.h>

void main()
{
   int n;
   printf("Enter the no rows : ");
   scanf("%d",&n);
  
 for(int i=0;i<2*n-1;i++)
  {
  if(i<n)
  {
    for(int j=1;j<=2*i+1;j++)
    printf("%d ",j);    
  }
  else
  {
    for(int j=1;j<=4*n-2*i-3;j++)
    printf("%d ",j);
  }
      printf("\n");
    }
} 