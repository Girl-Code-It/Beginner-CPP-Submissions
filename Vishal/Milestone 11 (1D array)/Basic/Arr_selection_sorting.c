#include<stdio.h>

void main()
{
    int a[50],n,b;
    printf("Enter no of element in 1D matrix : ");
    scanf("%d",&n);
    printf("Enter the element of matrix\n");
    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);
        
    //sorting the matrix

    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[i]>a[j])
            {
                b = a[i];
                a[i] = a[j];
                a[j] = b;
            }
        }

    }
    printf("Sorted matrix is : ");
    for(int i=0;i<n;i++)
    printf("%d ",a[i]);
}