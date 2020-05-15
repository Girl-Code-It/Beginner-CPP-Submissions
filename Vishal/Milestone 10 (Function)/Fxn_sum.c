#include <stdio.h>

int sum(x,y)
{
    return x+y;
}

void main()
{
    int a,b;
    printf("Enter any two no for geting sum");
    scanf("%d %d",&a,&b);   
    printf("Sum of two no is %d\n",sum(a,b));
}




    