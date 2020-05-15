#include<stdio.h>

void print_matrix(int a[3][3])
{
printf("Given matrix is :\n");
   for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
            printf("%d\t",a[i][j]);
            printf("\n");
    }
}

void main()
{
    int a[3][3];
    printf("Enter the elements\n");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
            scanf("%d",&a[i][j]);
    }
    print_matrix(a);
}  
    