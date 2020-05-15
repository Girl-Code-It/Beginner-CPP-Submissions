#include<stdio.h>

//Coverage for a particular 0 is defined as, total number of ones around a zero (i.e. in left, right, up and bottom directions).
// Returns total coverage of all zeros in mat[][]

void Coverage(int m,int n,int mat[][n])
{
    int res = 0;
    //  looping for all rows of matrix
    for (int i = 0; i < m; i++)
    {
        int isOne = 0;  // 1 is not seen yet
        // looping in columns from left to right
        // direction to get left ones
        for (int j = 0; j < n; j++)
        {
            // If one is found from left
            if (mat[i][j] == 1)
                isOne = 1;
            // If 0 is found and we have found
            // a 1 before.
            else if (isOne)
                res++;
        }
        // Repeat the above process for right to
        // left direction.
        isOne = 0;
        for (int j = n-1; j >= 0; j--)
        {
            if (mat[i][j] == 1)
                isOne = 1;
            else if (isOne)
                res++;
        }
    }
    // Traversing across columms for up and down
    // directions.
    for (int j = 0; j < n; j++)
    {
        int isOne = 0;  // 1 is not seen yet
        for (int i = 0; i < m; i++)
        {
            if (mat[i][j] == 1)
                isOne = 1;
            else if (isOne)
                res++;
        }
        isOne = 0;
        for (int i = m-1; i >= 0; i--)
        {
            if (mat[i][j] == 1)
                isOne = 1;
            else if (isOne)
                res++;
        }
    }
    printf("Total coverage of zeroes is : %d",res);
}
void main()
{
    int a[10][10],m,n;
    printf("Enter the no. Of rows : ");
    scanf("%d",&m);
    printf("Enter the no. Of column : ");
    scanf("%d",&n);

    printf("\nIt is a boolean matrix\n");
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("Enter the element a[%d][%d] : ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }

    printf("\nMatrix :\n");
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
            printf("%d\t",a[i][j]);
        printf("\n");
    }

    Coverage(m,n,a);

}