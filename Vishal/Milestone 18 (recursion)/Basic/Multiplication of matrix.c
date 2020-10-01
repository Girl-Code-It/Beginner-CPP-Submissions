#include<stdio.h>

void input(int row,int col,int arr[][col])
{
    for(int i=0; i<row; i++)
        for(int j=0; j<col; j++)
            scanf("%d",&arr[i][j]);
}

void print(int row,int col,int arr[][col])
{
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
            printf("%d  ",arr[i][j]);
        printf("\n");
    }
}

void multiply(int row,int col,int same,int a[][same],int b[][col],int c[][col])
{
    static int sum = 0,i = 0,j = 0,k = 0;

    if(i < row)
    {
        if(j < col)
        {
            if(k < same)
            {
                sum += a[i][k]*b[k][j];
                k++;
                multiply(row,col,same,a,b,c);
            }
            c[i][j] = sum;
            sum = 0;
            k = 0;
            j++;
            multiply(row,col,same,a,b,c);
        }
        j = 0;
        i++;
        multiply(row,col,same,a,b,c) ;
    }

}

int main()
{
    int m,n,p,q;
    printf("Enter the order of the 1st matrix : ");
    scanf("%d %d",&m,&n);
    printf("Enter the order of the 2nd matrix : ");
    scanf("%d %d",&p,&q);

    if(n != p)
        printf("Multiplication is not possible!\n");

    else
    {
        int a[m][n],b[p][q],c[m][q];
        printf("Enter the element of the 1st matrix :\n");
        input(m,n,a);
        printf("Enter the element of the 2nd matrix :\n");
        input(p,q,b);

        multiply(m,q,n,a,b,c);
        printf("\nmultiplied matrix....\n");
        print(m,q,c);
    }
    return 0;
}