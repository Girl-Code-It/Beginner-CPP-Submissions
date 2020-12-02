/*
Write a C program to calculate product of digits of a number.

*/
#include <stdio.h>

int main()
{
    int n;
    printf("Enter your number: "); scanf("%d",&n);
    int pdt = 1, copy = n;

    while(n != 0)
    {
        pdt *= n%10;
        n /= 10;
    }
    printf("The sum of the digits of %d is %d",copy,pdt);
    return 0;
}