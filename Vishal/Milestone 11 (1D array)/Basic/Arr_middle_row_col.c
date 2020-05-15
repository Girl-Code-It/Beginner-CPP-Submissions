#include<stdio.h>

void main()
{
    int a[10][10],m,n;
    printf("Enter the order of matrix(must be odd) : ");
    scanf("%d",&m);
    printf("Enter the element : ");
    for(int i=0; i<m; i++)
        for(int j=0; j<m; j++)
            scanf("%d",&a[i][j]);

    printf("\nMatrix :\n");
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<m; j++)
            printf("%d\t",a[i][j]);
        printf("\n");
    }

    printf("\nMiddle row : ");
    for(int i=0; i<m; i++)
        printf("%d\t",a[m/2][i]);

    printf("\nMiddle column : ");
    for(int i=0; i<m; i++)
        printf("%d\t",a[i][m/2]);
}