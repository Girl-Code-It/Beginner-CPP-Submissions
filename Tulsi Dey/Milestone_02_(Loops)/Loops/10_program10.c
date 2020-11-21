/*
Write a C program to count number of digits in a number.

*/
#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    int count = 0, copy = n;
    while(n != 0)
    {
        count++;
        n /= 10;
    }
    printf("No. of digits in %d is %d",copy,count);
    return 0;
}