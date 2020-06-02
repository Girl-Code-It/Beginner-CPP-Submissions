#include<stdio.h>

void main ()
{
    int i,j,n,m,k,sum=0;
    int a[10][10],multiply[10][10];
    printf("Enter the no of rows and columns of the matrix : ");
    scanf("%d%d",&m,&n);
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("Enter the element a[%d][%d] : ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nMatrix a :\n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
            printf("%d\t",a[i][j]);
        printf("\n");
    }
    printf("\nColumm in wave form : \n");
    for(j=0; j<n; j++)
    {
        for(i=0; i<m; i++)
        {
            if(j%2 == 0)
                printf("%d ",a[i][j]);
            else
                printf("%d ",a[n-1-i][j]);
        }
    }

}