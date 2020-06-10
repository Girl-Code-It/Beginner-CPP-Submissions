#include<stdio.h>

int main ()
{
    int n,a,sum;
    printf("input a integer \n");
    scanf("%d",&n);
    a=n%10;
    while(n>=10)
    {
       n/=10;
    }
    printf("First digit is %d\n",n);
    printf("Last digit is %d\n",a);
    sum=n+a;
    printf("Sum of first and last digit is %d",sum);
    return 0;
}
    