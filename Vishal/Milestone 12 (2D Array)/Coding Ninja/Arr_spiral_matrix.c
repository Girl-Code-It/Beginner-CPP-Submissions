#include<stdio.h>
void main()
{
    int n,a[10][10];
    printf("Enter the size of matrix : ");
    scanf("%d",&n);
    for(int i =0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("Enter the element a[%d][%d] : ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nmatrix : \n");
    for(int i =0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            printf("%d\t",a[i][j]);
        printf("\n");
    }
    printf("\nIn spiral form\n");
    int round = ceil((float)n/2);
    for(int i=0; i<round; i++)
    {
        for(int j=i; j<=n-1-i; j++)
            printf("%d ",a[i][j]);
        for(int j=i+1; j<=n-1-i; j++)
            printf("%d ",a[j][n-1-i]);
        for(int j=n-2-i; j>=i; j--)
            printf("%d ",a[n-1-i][j]);
        for(int j=n-2-i; j>i; j--)
            printf("%d ",a[j][i]);
    }
}