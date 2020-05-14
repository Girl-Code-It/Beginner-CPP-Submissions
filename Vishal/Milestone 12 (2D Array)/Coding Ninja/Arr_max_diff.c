
#include <stdio.h>


int find_max_diff(int n,int mat[][n])
{
    int max_diff = -32678;
    for(int a=0; a<n-1; a++)
    {
        for(int b=0; b<n-1; b++)
        {
            for(int c=a+1; c<n; c++)
            {
                for(int d=b+1; d<n; d++)
                {
                    if(max_diff<(mat[c][d] - mat[a][b]))
                       max_diff = mat[c][d] - mat[a][b];
                }
            }
        }
    }
    return max_diff;
}
int main()
{
    int n,mat[5][5];
  printf("Enter the order of matrix : ");
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("Enter the element a[%d][%d] : ",i+1,j+1);
            scanf("%d",&mat[i][j]);
        }
    }
    printf("\nMatrix....\n");
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            printf("%d\t",mat[i][j]);
        printf("\n");
    }
    int result = find_max_diff(n,mat);
    printf("\nMaximum difference is %d\n", result);
    return 0;
}