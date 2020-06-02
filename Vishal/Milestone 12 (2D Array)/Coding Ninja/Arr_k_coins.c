#include<stdio.h>
#define R 3
#define C 3
int dp[R][C][100];
int path_count_recur(int mat[][C],int m,int n,int k)
{
    if(m<0 || n<0)
        return 0;
    if(m==0 && n==0)
        return (k == mat[m][n]);
    if(dp[m][n][k]!=-1)
        return dp[m][n][k];

    dp[m][n][k] = path_count_recur(mat,m,n-1,k-mat[m][n]) + path_count_recur(mat,m-1,n,k-mat[m][n]);

    return dp[m][n][k];
}
int path_count(int mat[][C],int k)
{
    memset(dp,-1,sizeof(dp));
    return path_count_recur(mat,R-1,C-1,k);

}
int main()
{
    int mat[R][C],k;
    printf("Enter the coins\n");
    for(int i=0; i<R; i++)
        for(int j=0; j<C; j++)
            scanf("%d",&mat[i][j]);
    printf("\nMatrix...\n");
    for(int i=0; i<R; i++)
    {
        for(int j=0; j<C; j++)
            printf("%d\t",mat[i][j]);
        printf("\n");
    }
    printf("\nEnter the amount : ");
    scanf("%d",&k);
    printf("No. Of ways are : %d",path_count(mat,k));
}