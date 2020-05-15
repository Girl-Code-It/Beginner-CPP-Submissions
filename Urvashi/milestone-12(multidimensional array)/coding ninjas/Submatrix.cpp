#include <stdio.h> 

void printSumTricky(int n,int mat[][n], int k) 
{  
   if (k > n) return; 

   int stripSum[n][n]; 
   
   for (int j=0;j<n;j++)
   {
       int sum = 0; 
      for (int i=0; i<k; i++) 
          sum += mat[i][j]; 
       stripSum[0][j] = sum; 
 
       for (int i=1; i<n-k+1; i++) 
       { 
            sum += (mat[i+k-1][j] - mat[i-1][j]); 
            stripSum[i][j] = sum; 
       } 
   }  
   for (int i=0; i<n-k+1; i++) 
   { 
      int sum = 0; 
      for (int j = 0; j<k; j++) 
           sum += stripSum[i][j]; 
      printf("%d\t",sum); 
      for (int j=1; j<n-k+1; j++) 
      { 
         sum += (stripSum[i][j+k-1] - stripSum[i][j-1]); 
         printf("%d\t",sum);
      } 
      printf("\n");
   }
} 

void main ()
{
    int mat[7][7],n,k;
    printf("Enter the order of the square matrix : ");
    scanf("%d",&n);
    printf("Enter the order of sub-matrix :");
    scanf("%d",&k);

    if(k>n)
    {   printf("Not possible!!!");
        return ;
    }

    printf("Enter the elements :\n");
    for (int i=0; i<n; i++)
        for (int j=0; j<n; j++)
            scanf("%d",&mat[i][j]);

    printf("\nMatrix....\n");
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
            printf("%d\t",mat[i][j]);
        printf("\n");
    }
    printSumTricky(n,mat, k); 

} 

