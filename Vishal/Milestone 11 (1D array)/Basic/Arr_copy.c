#include<stdio.h>

void main()
{
    int a[50],n,i=0,b[50];
    printf("Enter the no of element : ");
    scanf("%d",&n);

    printf("Enter the elements : ");
    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);

   while(i<n)
   {
      b[i] = a[i];
      i++;
   }
     
    b[i] = '/0';
      
    printf("Copied array is : ");
   for(int i=0; i<n; i++)
        printf("%d ",b[i]);

}