#include<stdio.h>

int main ()
{
    int n,a,multiply;
    printf("input a integer \n");
    scanf("%d",&n);
    a=n%10;
    while(n>=10)
    {
       n/=10;
    }
    printf("First digit is %d\n",n);
    printf("Last digit is %d\n",a);
    multiply=n*a;
    printf("Multiplication of first and last digit is %d",multiply);
    return 0;
}
    