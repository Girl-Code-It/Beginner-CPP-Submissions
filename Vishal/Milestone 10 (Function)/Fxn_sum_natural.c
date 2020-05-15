#include<stdio.h>
int sum_natural(n)
{
    
    if(n<=1)
    return n;
    
    return n+sum_natural(n-1);
}

int main()
{
    int n;
    printf("Enter the upper limit : ");
    scanf("%d",&n);
    printf("Sum of natural no from 1 to %d is\n",n);
    printf("%d",sum_natural(n));
    return 0;
}