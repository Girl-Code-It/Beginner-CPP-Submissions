#include <stdio.h>

void natural(x,n)
{
    while(x<=n)
    {
        printf("%d\n",x);
        x++;
    }
}

void main()
{
    int n,a=1;
    printf("Enter the no upto which you want to printf no : ");
    scanf("%d",&n);
    printf("All natural no from 1 to %d are\n",n);
    natural(a,n);
}




