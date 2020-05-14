#include<stdio.h>

int main()
{   
    int n;
    printf("Enter no of rows : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        { 
        if(i==j||i+j==n+1||(1<j&&j<n&&1<i&&i<n))
        printf("0 ");
        else
        printf("1 ");
        }
        printf("\n");
    }
    return 0;

}