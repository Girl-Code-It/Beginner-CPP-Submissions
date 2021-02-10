/*
Write a C program to calculate factorial of a number.

*/
#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number: "); scanf("%d",&n);
    long factorial = 1;

    for(int i = 1; i <= n; i++)
    {
        factorial *= i;
    }

    printf("The factorial of %d is %d",n,factorial);

    return 0;
}