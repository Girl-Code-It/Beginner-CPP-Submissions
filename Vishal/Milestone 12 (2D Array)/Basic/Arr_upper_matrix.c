#include<stdio.h>

void input_element(int m,int n,int arr[][n])
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

void print_upper_matrix(int m,int n,int arr[][n])
{
    printf("\nUpper Matrix :\n");
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
           if(i<=j)
                printf("%d\t",arr[i][j]);
            else
                printf(" \t");
        }
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

    print_matrix(m,n,a);

    print_upper_matrix(m,n,a);

}