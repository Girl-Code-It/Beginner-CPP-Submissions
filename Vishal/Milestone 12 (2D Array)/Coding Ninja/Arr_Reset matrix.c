#include <stdio.h>

// function to print the matrix
void printMatrix(int M,int N,int mat[M][N])
{
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
            printf("%d ",mat[i][j]);
        printf("\n");
    }
    printf("\n");
}

// change all elements of row x and column y to -1
void changeRowColumn(int M,int N,int mat[M][N], int x, int y)
{
    for (int j = 0; j < N; j++)
        if (mat[x][j] != 0)
            mat[x][j] = -1;

    for (int i = 0; i < M; i++)
        if (mat[i][y] != 0)
            mat[i][y] = -1;
}

// Function to convert the matrix
void convert(int M,int N,int mat[M][N])
{
    // traverse the matrix
    for (int i = 0; i < M; i++)
        for (int j = 0; j < N; j++)
            if (mat[i][j] == 0)    // cell (i, j) has value 0
                // change each non-zero element in row i and column j to -1
                changeRowColumn(M,N,mat, i, j);

    // traverse the matrix once again and replace cells having
    // value -1 with 0
    for (int i = 0; i < M; i++)
        for (int j = 0; j < N; j++)
            if (mat[i][j] == -1)
                mat[i][j] = 0;
}

int main()
{
    int M,N,mat[10][10];
    printf("Enter no. Of rows and column : ");
    scanf("%d %d",&M,&N);

    printf("Enter the boolean matrix's element\n");
    for (int i = 0; i < M; i++)
        for (int j = 0; j < N; j++)
            scanf("%d",&mat[i][j]);
            
     printf("\nMatrix....\n");
    printMatrix(M,N,mat);
    // convert the matrix
    convert(M,N,mat);

    printf("\nReset Matrix....\n");
    // print matrix
    printMatrix(M,N,mat);

    return 0;
}