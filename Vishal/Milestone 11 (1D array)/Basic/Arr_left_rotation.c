#include<stdio.h>

void main()
{
    int a[50],n,b[50];
    printf("Enter no of element : ");
    scanf("%d",&n);

    printf("Enter the element\n");
    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);

    for(int i=0; i<n-1; i++)
        b[i] = a[i+1];

    b[n-1] = a[0];

    printf("left rotation of an array\n");
    for(int i=0; i<n; i++)
        printf("%d ",b[i]);
}