#include<stdio.h>

int main ()
{
    int n,a[50],odd[50],even[50],j=0,k=0;
    printf("Enter the no of element : ");
    scanf("%d",&n);

    printf("input the element\n");
    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);

    for(int i=0; i<n; i++)
    {
        if(a[i]%2 == 0)
        {
            even[j] = a[i];
            j++;
        }
        else
        {
            odd[k] = a[i];
            k++;
        }

    }

    printf("array with odd element\n");
    for(int i=0; i<k; i++)
        printf("%d ",odd[i]);

    printf("\narray with even element\n");
    for(int i=0; i<j; i++)
        printf("%d ",even[i]);

    return 0;
}

