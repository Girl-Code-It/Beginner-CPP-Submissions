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
    printf("\nMatrix :\n");
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
            printf("%d\t",arr[i][j]);
        printf("\n");
    }
}

void add_rows(int m,int n,int arr[][n])
{

    for(int i=0; i<m; i++)
    {
        int sum = 0;
        for(int j=0; j<n; j++)
            sum += arr[i][j];
        printf("Sum of element of row %d is : %d\n",i+1,sum);
    }
}

void add_columns(int m,int n,int arr[][n])
{

    for(int j=0; j<n; j++)
    {
        int sum = 0;
        for(int i=0; i<m; i++)
            sum += arr[i][j];
        printf("\nSum of element of column %d is : %d",j+1,sum);
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

    print_matrix(m,n,a);

    add_rows(m,n,a);
    
    add_columns(m,n,a);
}