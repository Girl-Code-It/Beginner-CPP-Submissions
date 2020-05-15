#include<stdio.h>
void main()
{
    int n;
    char a[10][10], x = 'X';
    printf("Enter the size of matrix : ");
    scanf("%d",&n);   
    int round = ceil((float)n/2);
    for(int i=0; i<round; i++)
    {
        for(int j=i; j<=n-1-i; j++)
            a[i][j] = x;
        for(int j=i+1; j<=n-1-i; j++)
            a[j][n-1-i] = x;
        for(int j=n-2-i; j>=i; j--)
           a[n-1-i][j] = x;
        for(int j=n-2-i; j>i; j--)
            a[j][i] = x;
            
            if(x == '0')
            x = 'X';
            else
            x = '0';
    }
    printf("\nmatrix : \n");
    for(int i =0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            printf("%c  ",a[i][j]);
        printf("\n");
    }
}