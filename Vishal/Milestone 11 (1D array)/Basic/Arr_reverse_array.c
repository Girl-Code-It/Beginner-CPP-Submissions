#include<stdio.h>

int main ()
{
    int n,a[50],b[50];
    printf("Enter the no of element : ");
    scanf("%d",&n);

    printf("input the element\n");
    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);

    for(int i=0;i<n;i++)
         b[i] = a[n-i-1];
        
     printf("Reverse array\n");
    for(int i=0; i<n; i++)
        printf("%d ",b[i]);
    return 0;
}

