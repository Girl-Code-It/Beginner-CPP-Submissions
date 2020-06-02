#include<stdio.h>

int main ()
{
    int n,a[50],i,val;
    printf("Enter the no of element : ");
    scanf("%d",&n);

    printf("Enter the element\n");
    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);

    printf("Enter the no that you want to search in given array : ");
    scanf("%d",&val);

    for(i=0; i<n; i++)
    {
        if(a[i] == val)
        {
            printf("%d is found.\n",val);
            break;
        }
    }

    if(i==n)
        printf("%d is not found.\n",val);

    return 0;
}

