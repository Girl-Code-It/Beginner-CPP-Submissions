#include <stdio.h>

int main()
{
    int m, x = 0;
    int a[10][10];
    printf("enter the size of matrix : ");
    scanf("%d", &m);
    printf("\nEnter the element of matrix : ");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
            scanf("%d", &a[i][j]);
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] != a[j][i])
                x = 1;
        }
    }
    printf("\na[i][j] \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)

            printf("%d\t", a[i][j]);
        printf("\n");
    }
    if (x == 0)
        printf("\nGiven Matrix is a symmetric.");
    else
        printf("\nGiven Matrix is asymmetric.");

    return 0;
}