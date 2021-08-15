#include<stdio.h>

void input_element(int m,int n,int **arr)
{
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("Enter the element a[%d][%d] : ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
}

void print_matrix(int m,int n,int **arr)
{
    printf("\nMatrix :\n");
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
            printf("%d\t",arr[i][j]);
        printf("\n");
    }
}

void add_left_diagonal(int m,int n,int **arr)
{
    int sum = 0;
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
           if(i==j)
            sum += arr[i][j];
         }
    }

    printf("Left diagonal sum is : %d\n",sum);
}

void add_right_diagonal(int m,int n,int **arr)
{
    int sum = 0;
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
           if(j+i==(n-1))
            sum += arr[i][j];
         }
    }

    printf("Right diagonal sum is : %d\n",sum);
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
    
    add_left_diagonal(m,n,a);
    
    add_right_diagonal(m,n,a);
}