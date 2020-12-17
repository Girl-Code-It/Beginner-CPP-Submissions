/*
Write a C program to calculate sum of digits of a number.

*/
#include <stdio.h>

int main()
{
    int n;
    printf("Enter your number: "); scanf("%d",&n);
    int sum = 0, copy = n;

    while(n != 0)
    {
        sum += n%10;
        n /= 10;
    }
    printf("The sum of the digits of %d is %d",copy,sum);
    return 0;
}