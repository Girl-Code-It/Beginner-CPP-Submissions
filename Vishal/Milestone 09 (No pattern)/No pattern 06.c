#include<stdio.h>

int main()
{   
    int n, flag = 1;
    printf("Enter no of rows : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        { 
            printf("%d ", flag);
            flag = !flag;
        }
        printf("\n");
    }
    return 0;

}