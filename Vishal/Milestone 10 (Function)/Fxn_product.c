#include <stdio.h>

int product(x,y)
{
    return x*y;
}

void main()
{
    int a,b;
    printf("Enter any two no : ");
    scanf("%d %d",&a,&b);   
    printf("Product of two no is %d\n",product(a,b));
}




    