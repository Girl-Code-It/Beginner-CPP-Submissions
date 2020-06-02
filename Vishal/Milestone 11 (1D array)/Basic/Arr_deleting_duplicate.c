#include<stdio.h>

int main ()
{
    int n,a[50];
    printf("Enter the no of element : ");
    scanf("%d",&n);

    printf("input the integer \n");
    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);

    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[i]==a[j])
            {
                for(int k=j; k<n; k++)
                    a[k] = a[k+1];

                n--;//size of array decreases
                j--;
            }
        }
    }

    printf("\nArray after deleting duplicate element is : ");
    for(int i=0; i<n; i++)
        printf("%d ",a[i]);

    return 0;
}

