#include<stdio.h>

void main()
{
    int n,a[50],b[50],c,loc;
    printf("Enter the no of element : ");
    scanf("%d",&n);

    printf("Enter the elements : ");
    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);
    
    printf("Enter the location from where you want to delete the element: ");
        scanf("%d",&loc);
   for(int i=0;i<loc-1;i++)
      b[i] = a[i];
      
    for(int i=loc-1;i<n-1;i++)
      b[i] = a[i+1];
     
    printf("New array is : ");
   for(int i=0; i<n-1; i++)
        printf("%d ",b[i]);

}