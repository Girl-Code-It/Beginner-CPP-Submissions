#include<stdio.h>

int main()
{   
    int n,k=1;
    printf("Enter no of rows : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
        printf("%5d ",k);
        k++;
        }
        printf("\n");
    }
    return 0;

}