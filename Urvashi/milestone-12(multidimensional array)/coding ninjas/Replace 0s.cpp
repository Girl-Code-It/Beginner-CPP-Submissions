#include <stdio.h>

#define M 3
#define N 3
// A recursive function to replace previous value 'prevV' at  '(x, y)'
// and all surrounding values of (x, y) with new value 'newV'.
void floodFillUtil(int mat[M][N], int x, int y, int prevV, int newV)
{
    // Base cases
    if (x < 0 || x >= M || y < 0 || y >= N)
        return;
    if (mat[x][y] != prevV)
        return;

    // Replace the color at (x, y)
    mat[x][y] = newV;

    // Recur for north, east, south and west
    floodFillUtil(mat, x + 1, y, prevV, newV);
    floodFillUtil(mat, x - 1, y, prevV, newV);
    floodFillUtil(mat, x, y + 1, prevV, newV);
    floodFillUtil(mat, x, y - 1, prevV, newV);
}

// Returns size of maximum size subsquare matrix
// surrounded by 1
void replaceSurrounded(int mat[M][N])
{

    // Step 1: Replace all 0  with 2
    for (int i = 0; i < M; i++)
        for (int j = 0; j < N; j++)
            if (mat[i][j] == 0)
                mat[i][j] = 2;

    // Call floodFill for all 2 lying on edges
    for (int i = 0; i < M; i++) // Left side
        if (mat[i][0] == 2)
            floodFillUtil(mat, i, 0, 2, 0);
    for (int i = 0; i < M; i++) //  Right side
        if (mat[i][N - 1] == 2)
            floodFillUtil(mat, i, N - 1, 2, 0);
    for (int i = 0; i < N; i++) // Top side
        if (mat[0][i] == 2)
            floodFillUtil(mat, 0, i, 2, 0);
    for (int i = 0; i < N; i++) // Bottom side
        if (mat[M - 1][i] == 2)
            floodFillUtil(mat, M - 1, i, 2, 0);

    // Step 3: Replace all 2 with 1
    for (int i = 0; i < M; i++)
        for (int j = 0; j < N; j++)
            if (mat[i][j] == 2)
                mat[i][j] = 1;

    printf("\nOuput....\n");
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
            printf("%d\t", mat[i][j]);
        printf("\n");
    }
}

int main()
{
    int mat[3][3];
    printf("Enter the element of boolean matrix :\n");
    for (int i = 0; i < M; i++)
        for (int j = 0; j < N; j++)
            scanf("%d", &mat[i][j]);
    printf("\nInput....\n");
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
            printf("%d\t", mat[i][j]);
        printf("\n");
    }

    replaceSurrounded(mat);
}
