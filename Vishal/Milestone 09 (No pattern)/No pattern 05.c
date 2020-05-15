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
        if(j==(n+1)/2&&i==(n+1)/2)
        printf("0 ");
        else
        printf("1 ");
        }
        printf("\n");
    }
    return 0;

}