#include<stdio.h>

void main()
{
    int a[3][3],sym=1;
    printf("Enter the elements\n");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
            scanf("%d",&a[i][j]);
    }
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
            printf("%d\t",a[i][j]);
        printf("\n");
    }
    
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
            if(a[i][j]!=a[j][i])
                sym=0;
             
    }
    if(sym==1)
        printf("It is a symmetric matrix");
    else
        printf("It is a asymmetric matrix");
}