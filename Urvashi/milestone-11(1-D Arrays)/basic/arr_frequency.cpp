#include<stdio.h>

int main ()
{
    int n,a[50],count;
    printf("Enter the no of element : ");
    scanf("%d",&n);

    printf("input the integer \n");
    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);

    for(int i=0; i<10; i++)
    {
        printf("frequency of %d = ",i);
        count=0;
        for(int j=0; j<n; j++)
        {
            if(a[j]==i)
            {
                count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
