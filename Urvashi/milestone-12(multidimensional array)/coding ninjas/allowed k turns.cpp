#include<stdio.h>
int countPathsUtil(int i, int j, int k, int d)
{
    // If invalid row or column indexes
    if (i < 0 || j < 0)
        return 0;
    // If current cell is top left itself
    if (i == 0 && j == 0)
        return 1;
    // If 0 turns left
    if (k == 0)
    {
        // If direction is row, then we can reach here
        // only if direction is row and row is 0.
        if (d == 0 && i == 0) return 1;
        // If direction is column, then we can reach here
        // only if direction is column and column is 0.
        if (d == 1 && j == 0) return 1;
        return 0;
    }
    // If current direction is row, then count paths for two cases
    // 1) We reach here through previous row.
    // 2) We reach here through previous column, so number of
    //    turns k reduce by 1.
    if (d == 0)
        return  countPathsUtil(i, j-1, k, d) + countPathsUtil(i-1, j, k-1, !d);
    return  countPathsUtil(i-1, j, k, d) + countPathsUtil(i, j-1, k-1, !d);
}

// This function mainly initializes 'dp' array as -1 and calls
// countPathsUtil()
int countPaths(int i, int j, int k)
{
    // If (0, 0) is target itself
    if (i == 0 && j == 0)
        return 1;

    // Recur for two cases: moving along row and along column
    return countPathsUtil(i-1, j, k, 1) +  // Moving along row
           countPathsUtil(i, j-1, k, 0); // Moving along column
}
int main()
{
   int m,n,k;
   printf("Enter the no of rows and column");
   scanf("%d%d",&m,&n);
   printf("Enter the maximum turn allowed : ");
   scanf("%d",&k);
   printf("No of path are %d",countPaths(m-1,n-1,k));
}
