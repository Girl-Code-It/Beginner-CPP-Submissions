/*
Write a C program to find power of a number using for loop.

*/
#include <stdio.h>

int main()
{
    int n, power;
    printf("Enter the number: "); scanf("%d",&n);
    printf("Enter the power: "); scanf("%d",&power); 
    
    int res = 1;

    for(int i = 1; i <= power; i++)
    res *= n;

    printf("%d raised to the power of %d is %d",n,power,res);

    return 0;
}