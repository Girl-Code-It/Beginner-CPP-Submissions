#include <stdio.h>

int main()
{
    int i, j, m, n, p, q, k, sum = 0;
    int a[10][10], b[10][10], multiply[10][10];
    printf("enter the no. of rows and columns : ");
    scanf("%d%d", &m, &n);
    printf("enter the values in matrix\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    }
    printf("\na[i][j] \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)

            printf("%d\t", a[i][j]);
        printf("\n");
    }
    printf("enter the no. of rows and columns : ");
    scanf("%d%d", &p, &q);
    if (n != p)
        printf("multiplication of matrices is not possible\n ");
    else
        printf("enter the values in matrix\n");
    for (i = 0; i < p; i++)
    {
        for (j = 0; j < q; j++)
            scanf("%d", &b[i][j]);
    }
    printf("\nb[i][j] \n");
    for (i = 0; i < p; i++)
    {
        for (j = 0; j < q; j++)
            printf("%d\t", b[i][j]);
        printf("\n");
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < q; j++)
        {
            for (k = 0; k < p; k++)
            {
                sum = sum + a[i][k] * b[k][j];
            }
            multiply[i][j] = sum;
            sum = 0;
        }
    }
    printf("Product of matrices \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < q; j++)
            printf("%d\t", multiply[i][j]);
        printf("\n");
    }
    return 0;
}