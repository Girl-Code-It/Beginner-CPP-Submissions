//question-8(reset matrix):-Given an m x n matrix of 0s and 1s, if an element is 0, set its entire row and
// column to 0. function to print the matrix

#include <stdio.h>
void printMatrix(int mat[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }
    printf("\n");
}
// change all elements of row x and column y to -1
void changeRowColumn(int mat[3][3], int x, int y)
{
    for (int j = 0; j < 3; j++)
        if (mat[x][j] != 0)
            mat[x][j] = -1;
    for (int i = 0; i < 3; i++)
        if (mat[i][y] != 0)
            mat[i][y] = -1;
}
// Function to convert the matrix
void convert(int mat[3][3])
{
    // traverse the matrix
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (mat[i][j] == 0) // cell (i, j) has value 0
                // change each non-zero element in row i and column j to -1
                changeRowColumn(mat, i, j);
    // traverse the matrix once again and replace cells having
    // value -1 with 0
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (mat[i][j] == -1)
                mat[i][j] = 0;
}

int main()
{
    int mat[3][3];
    printf("Enter the boolean matrix's element\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &mat[i][j]);
    printMatrix(mat);
    // convert the matrix
    convert(mat);
    // print matrix
    printMatrix(mat);
    return 0;
}
