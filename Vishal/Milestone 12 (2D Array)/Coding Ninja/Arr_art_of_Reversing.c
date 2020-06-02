#include<stdio.h>

void input_element(int m,int n,int arr[][n])
{
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("Enter the element a[%d][%d] : ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
}

void print_matrix(int m,int n,int arr[][n])
{
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
            printf("%d\t",arr[i][j]);
        printf("\n");
    }
}

void reverse_rows(int m,int n,int arr[][n])
{
    printf("\nReverse row matrix :\n");

    for(int i=0; i<m; i++)
    {
     for(int j=n-1; j>=0; j--)
         printf("%d\t",arr[i][j]);
        printf("\n");
    }
}

void main()
{
    int a[10][10],m,n;
    printf("Enter the no. Of rows : ");
    scanf("%d",&m);
    printf("Enter the no. Of column : ");
    scanf("%d",&n);

    input_element(m,n,a);
    
    printf("\nInput Matrix :\n");
    print_matrix(m,n,a);
    
    reverse_rows(m,n,a);
    
}