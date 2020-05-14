#include<stdio.h>

int main ()
{
    int n,a[50],count,Count=0;
    printf("Enter the no of element : ");
    scanf("%d",&n);

    printf("input the integer \n");
    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);
    
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
        if(count>1)
        Count++;
    }
    
    printf("Total no of duplicate element are : %d",Count);
    return 0;
}

