#include<stdio.h>

int sum_digits(num)
{
    int rem = num%10;
    if(rem<=0) return 0;
    else
        return rem + sum_digits(num/10);
}

void main()
{
    int n;
    printf("Enter any no : ");
    scanf("%d",&n);
    printf("Sum of digits of %d is %d",n,sum_digits(n));
}