#include<stdio.h>

int isvalid(int i,int j,int m,int n)
{
  if(i < 0 || i >= m || j < 0 || j >= n )
  return 0;
  else
  return 1;
}

void print_matrix_diagonal_form(int m,int n,int a[][n])
{
  printf("\nMatrix in diagonal form :\n");
   for(int k=0;k<m;k++)
   {
     printf("%d ",a[k][0]);
     int i= k-1;
     int j= 1;
     while(isvalid(i,j,m,n))
      {
        printf("%d ",a[i][j]);
        i--;
        j++;
      }
      printf("\n");
   }
  for(int k=1;k<n;k++)
   {
     printf("%d ",a[m-1][k]);
     int i= m-2;
     int j= k+1;
     while(isvalid(i,j,m,n))
      {
        printf("%d ",a[i][j]);
        i--;
        j++;
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

    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("Enter the element a[%d][%d] : ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    
    printf("\nMatrix :\n");
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
            printf("%d\t",a[i][j]);
        printf("\n");
    }
    
    print_matrix_diagonal_form(m,n,a);
}