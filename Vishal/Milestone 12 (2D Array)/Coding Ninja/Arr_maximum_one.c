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

void maximum_1s(int m,int n,int arr[][n])
{    
  int max = 0,row = 0;
    for(int i=0; i<m; i++)
    {
      int count = 0;
       for(int j=0;j<n;j++)
        {
           count += arr[i][j];
        }
        
        if(count>max)
        {
          max = count;
          row = i;
        }
         
    }
    printf("\nMaximum no of 1 is %d in row %d.\n",max,row+1);
}

void main()
{
    int a[10][10],m,n;
    printf("Enter the no. Of rows : ");
    scanf("%d",&m);
    printf("Enter the no. Of column : ");
    scanf("%d",&n);
printf("\nIt is a boolean matrix\n");
    input_element(m,n,a);

    print_matrix(m,n,a);

    maximum_1s(m,n,a);

}