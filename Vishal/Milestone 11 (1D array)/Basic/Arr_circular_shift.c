#include<stdio.h>

void main()
{
   int n;
   printf("Enter the no of element : ");
   scanf("%d",&n);
   int a[n],b[n];
   printf("Enter the elements\n");
   for(int i=0;i<n;i++)
   scanf("%d",&a[i]);

   for(int i=0;i<n-1;i++)
       b[i+1] = a[i];
    
    b[0] = a[n-1];
    
    for(int i=0;i<n;i++)
    printf("%d ",b[i]);
}