#include<stdio.h>

void main ()
{
    int n,a[25],d;
    printf("Enter the size of array : ");
    scanf("%d",&n);

    printf("Enter the element :\n");
    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);

    printf("Enter the integer : ");
    scanf("%d",&d);
    int temp[d];

    printf("\nUpdated array....\n");
    for(int i=0; i<d; i++)
        temp[i] = a[i];

    for(int i=0; i<n; i++)
    {
        if(i<n-d)
            a[i] = a[i+d];
        else
            a[i] = temp[i-(n-d)];
    }

    for(int i=0; i<n; i++)
        printf("%d ",a[i]);

}