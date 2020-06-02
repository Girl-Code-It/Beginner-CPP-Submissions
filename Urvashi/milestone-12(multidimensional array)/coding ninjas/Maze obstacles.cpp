#include<stdio.h>

int paths_count(int R,int C,int mat[][C],int i,int j)
{
   if(i == R-1 && j == C-1)
   return 1;
    
   if(i>=R || j>=C)
   return 0;

   if(mat[i][j] == -1)
   return 0;

   return paths_count(R,C,mat,i+1,j) + paths_count(R,C,mat,i,j+1);
}
int main()
{
    int m,n,mat[5][5];
    printf("Enter the no of rows and column");
    scanf("%d %d",&m,&n);
    
    printf("Enter the obstacles\n");
    for(int i=0; i<m; i++)
    {
        for(int j=0;j<n;j++)
         scanf("%d",&mat[i][j]);      
    }
    
    printf("\nGiven matrix....\n");
    for(int i=0; i<m; i++)
    {
        for(int j=0;j<n;j++)
         printf("%d\t",mat[i][j]);
       printf("\n");
    }
    
    printf("\nNo. Of paths : %d\n",paths_count(m,n,mat,0,0));
    return 0;
}
