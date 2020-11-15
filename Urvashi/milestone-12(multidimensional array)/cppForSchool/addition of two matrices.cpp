#include <stdio.h>

void print(int row, int col, int **arr)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            printf("%d\t", arr[i][j]);
        printf("\n");
    }
}

void input(int row, int col, int **arr)
{
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            scanf("%d", &arr[i][j]);
}

void add(int row, int col, int **a, int **b, int **c)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            c[i][j] = a[i][j] + b[i][j];
    }
}
int main()
{
    int m, n;
    int a[10][10], b[10][10], c[10][10];
    printf("enter the no. of rows and columns : ");
    scanf("%d%d", &m, &n);
    //Input the element of matrix
    printf("Enter the element of the first matrix : ");
    input(m, n, a);
    printf("Enter the element of the second matrix : ");
    input(m, n, b);
    //Print the given matrix
    printf("\n1st Matrix.....\n");
    print(m, n, a);
    printf("\n2nd Matrix.....\n");
    print(m, n, b);
    //Addition of matrix
    add(m, n, a, b, c);
    printf("\nSum Matrix....\n");
    print(m, n, c);
    return 0;
}
