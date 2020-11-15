#include <stdio.h>
#include <math.h>

void rotateMatrix(int N, int mat[][N])
{
    // Consider all squares one by one
    for (int x = 0; x < ceil(N / 2); x++)
    {
        // Consider elements in group of 4 in
        // current square
        for (int y = x; y < N - x - 1; y++)
        {
            // store current cell in temp variable
            int temp = mat[x][y];
            // move values from right to top
            mat[x][y] = mat[y][N - 1 - x];
            // move values from bottom to right
            mat[y][N - 1 - x] = mat[N - 1 - x][N - 1 - y];
            // move values from left to bottom
            mat[N - 1 - x][N - 1 - y] = mat[N - 1 - y][x];
            // assign temp to left
            mat[N - 1 - y][x] = temp;
        }
    }
}

void Print_Matrix(int N, int mat[N][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            printf("%d\t", mat[i][j]);
        printf("\n");
    }
}

int main()
{
    int N, mat[5][5];
    printf("Enter the order of matrix : ");
    scanf("%d", &N);
    printf("Enter the element\n");
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            scanf("%d", &mat[i][j]);
    }
    printf("\nMatrix....\n");
    Print_Matrix(N, mat);
    //displayMatrix(mat);
    rotateMatrix(N, mat);
    printf("\nRotated Matrix....\n");
    // Print rotated matrix
    Print_Matrix(N, mat);
    return 0;
}
