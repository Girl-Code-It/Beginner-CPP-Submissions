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
void product_row(int m,int n,int arr[][n])
{

    for(int i=0; i<m; i++)
    {
        int product = 1;
        for(int j=0; j<n; j++)
            product *= arr[i][j];
        printf("Product of element of row %d is : %d\n",i+1,product);
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

    product_row(m,n,a);
}