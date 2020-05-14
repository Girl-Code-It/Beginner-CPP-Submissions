#include<stdio.h>

int main ()
{
    int n,a[50],count;
    printf("Enter the no of element : ");
    scanf("%d",&n);

    printf("input the integer \n");
    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);

    printf("Unique elements are : ");
    
    for(int i=0; i<10; i++)
    {
        count=0;
        for(int j=0; j<n; j++)
        {
            if(a[j]==i)
            {
                count++;
            }
        }
        if(count==1)
        printf("%d ",i);
    }
    return 0;
}

