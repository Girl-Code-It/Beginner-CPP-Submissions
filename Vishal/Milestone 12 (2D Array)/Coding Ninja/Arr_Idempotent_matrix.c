#include<stdio.h>

void main ()
{
    int i,j,m,k,sum=0,idm=1;
    int a[10][10],multiply[10][10];
    printf("Enter the order of the matrix : ");
    scanf("%d",&m);
    printf("enter the values in matrix\n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<m; j++)
            scanf("%d",&a[i][j]);
    }
    printf("\nMatrix a :\n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<m; j++)
            printf("%d\t",a[i][j]);
        printf("\n");
    }
    for(i=0; i<m; i++)
    {
        for(j=0; j<m; j++)
        {
            for(k=0;k<m;k++)
            {
            sum = sum + a[i][k]*a[k][j];
            }
         multiply[i][j] = sum;
         sum = 0;
        }
    }
    printf("\nMatrix a×a :\n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<m; j++)
            printf("%d\t",multiply[i][j]);
        printf("\n");
    }
    for(i=0;i<m;i++)
    {
       for(j=0;j<m;j++) 
        {
         if(a[i][j] != multiply[i][j])
         idm = 0;
        }      
    }
    if(idm == 1)
    printf("It is an idempotent matrix");
    else
    printf("It is not an idempotent matrix");
 
}