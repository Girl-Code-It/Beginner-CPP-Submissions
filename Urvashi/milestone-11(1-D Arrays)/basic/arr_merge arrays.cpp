#include<stdio.h>

int main ()
{
    int n1,n2,b[50],c[50],a[50],j=0;
    printf("Enter the no of element of array1 : ");
    scanf("%d",&n1);

    printf("input the element\n");
    for(int i=0; i<n1; i++)
        scanf("%d",&a[i]);

    printf("Enter the no of element of array2 : ");
    scanf("%d",&n2);

    printf("input the element\n");
    for(int i=0; i<n2; i++)
        scanf("%d",&b[i]);

    for(int i=0; i<n1; i++)
    {
        c[j] = a[i];
        j++;
    }

    for(int i=0; i<n2; i++)
    {
        c[j] = b[i];
        j++;
    }

    printf("\nMerge array is : ");
    for(int i=0; i<n1+n2; i++)
        printf("%d ",c[i]);

    return 0;
}
