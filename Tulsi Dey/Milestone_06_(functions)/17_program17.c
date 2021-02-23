/*
Write a C program to find cube of any number using function.

*/
#include <stdio.h>

int getCube(int n)
{
    return n*n*n;
}
int main()
{
    int n;
    printf("Enter a number: "); scanf("%d",&n);
    printf("Cube of %d is %d",n,getCube(n));
    return 0;
}