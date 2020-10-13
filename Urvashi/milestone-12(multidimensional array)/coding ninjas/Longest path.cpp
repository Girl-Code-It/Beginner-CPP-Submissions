#include <stdio.h>
#include <math.h>

int n;
int mat[100][100], dp[100][100];
int x[] = {-1, 0, 0, 1};
int y[] = {0, 1, -1, 0};

int max(int x, int y)
{
    if (x > y)
        return x;
    else
        return y;
}
int valid(int i, int j)
{
    if (i >= 0 || i < n || j >= 0 || j < n)
        return 1;
    else
        return 0;
}
int adjacent(int i, int j)
{
    if (i - j == 1)
        return 1;
    else
        return 0;
}
int func(int i, int j)
{
    if (dp[i][j] != -1)
        return dp[i][j];
    int ans = 0, k;
    for (k = 0; k < 4; k++)
    {
        if (valid(i + x[k], j + y[k]) && adjacent(mat[i + x[k]][j + y[k]], mat[i][j]))
            ans = max(ans, 1 + func(i + x[k], j + y[k]));
    }
    return dp[i][j] = ans;
}

int main()
{
    int i, j;
    printf("Enter the order of matrix : ");
    scanf("%d", &n);
    printf("\nEnter the element\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &mat[i][j]);
            dp[i][j] = -1;
        }
    }
    printf("\nMatrix....\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
    int ans = 1;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (dp[i][j] == -1)
            {
                func(i, j);
            }
            ans = max(ans, dp[i][j] + 1);
        }
    }
    printf("\nThe longest path is %d.\n", ans);
}
