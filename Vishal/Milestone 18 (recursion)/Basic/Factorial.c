#include<stdio.h>

int fac(n)
{
    if(n == 0)
        return 1;

    int fact = n*fac(n-1);

    return fact;
}
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);

    printf("\n%d! = %d\n",n,fac(n));
    return 0;
}