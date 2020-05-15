#include<stdio.h>

void main ()
{
    int i,j,row,col,k,sum=0;
    int a[10][10],multiply[10][10];
    printf("Enter the no of rows and columns of the matrix : ");
    scanf("%d%d",&row,&col);
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("Enter the element a[%d][%d] : ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nMatrix a :\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
            printf("%d\t",a[i][j]);
        printf("\n");
    }
    printf("\nRow in wave form : \n");
    int index = 0;
    int *arr = malloc((row*col)*sizeof(int));
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            if(i%2 == 0)
            {
                arr[index] = a[i][j];
                index++;
            }
            else
            {
                arr[index] = a[i][col-1-j];
                index++;
            }
        }
    }
    for(int i=0;i<index;i++)
    printf("%d ",arr[i]);

}