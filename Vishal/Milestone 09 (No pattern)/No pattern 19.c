#include<stdio.h>
void main()
{
    int n,a[10][10],count=1;
    printf("Enter the size of matrix : ");
    scanf("%d",&n);
    int round = ceil((float)n/2);
    for(int i=0;i<round;i++)
    {
        for(int j=i;j<=n-1-i;j++) 
        
             a[i][j] = count++; 
                    
        for(int j=i+1;j<=n-1-i;j++)
        
             a[j][n-1-i] = count++; 
                           
        for(int j=n-2-i;j>=i;j--)
        
             a[n-1-i][j] = count++; 
                     
        for(int j=n-2-i;j>i;j--)
        
             a[j][i] = count++; 
                   
          printf("\n");
    }
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        printf("%4d ",a[i][j]);
        printf("\n\n");
    }

}