#include<stdio.h>

void natural_no(y,n)
{
    if(y>n)
    return;
    printf("%d\n",y);
    natural_no(y+1,n);
}

int main()
{
    int n,x;
    printf("Enter the no upto which you want to print natural no. : ");
    scanf("%d",&n);
    natural_no(1,n);
    return 0;
}