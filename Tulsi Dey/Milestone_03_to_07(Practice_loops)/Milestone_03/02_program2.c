/*
Write a C program to find sum of first and last digit of a number.

*/
#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: "); scanf("%d",&n);
    int last = n%10, first, copy = n;
    
    while(n != 0)
    {
        first = n%10;
        n /= 10;
    }
    printf("Sum of first and last digit of %d is %d",copy,last+first);
    return 0;
}