/*
Write a C program to enter a number and print its reverse.

*/
#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number :"); scanf("%d",&n);
    int rev = 0, copy = n;

    while(n != 0)
    {
        rev = rev*10 + n%10;
        n /= 10;
    }

    printf("The reverse of %d is %d",copy,rev);
    return 0;
}