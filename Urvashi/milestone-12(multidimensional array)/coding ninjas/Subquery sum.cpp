#include <stdio.h>
#define R 3
#define C 4
int process_mat(int aux[][C], int mat[][C])
{
    for (int i = 0; i < C; i++)
        aux[0][i] = mat[0][i];

    for (int i = 1; i < R; i++)
        for (int j = 0; j < C; j++)
            aux[i][j] = mat[i][j] + aux[i - 1][j];

    for (int i = 0; i < R; i++)
        for (int j = 1; j < C; j++)
            aux[i][j] += aux[i][j - 1];
}

int sub_query_sum(int aux[][C], int tli, int tlj, int rbi, int rbj)
{
    int sum = aux[rbi][rbj];

    if (tli > 0)
        sum -= aux[tli - 1][rbj];

    if (tlj > 0)
        sum -= aux[rbi][tlj - 1];

    if (tli > 0 && tlj > 0)
        sum += aux[tli - 1][tlj - 1];

    return sum;
}
void print_matrix(int a[][C])
{
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
            printf("%d\t", a[i][j]);
        printf("\n");
    }
}
int main()
{
    int mat[3][4], tli, tlj, rbi, rbj;
    int aux[R][C];

    printf("Enter the Elements\n");
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
            scanf("%d", &mat[i][j]);
    }

    printf("\nGiven matrix is\n");
    print_matrix(mat);
    process_mat(aux, mat);
    printf("\nAux matrix is\n");
    print_matrix(aux);

    printf("\nEnter the cordinate of\n");
    printf("left Top : ");
    scanf("%d %d", &tli, &tlj);

    printf("right bottom : ");
    scanf("%d %d", &rbi, &rbj);

    printf("\nSub Query Sum : %d\n", sub_query_sum(aux, tli, tlj, rbi, rbj));
    return 0;
}
