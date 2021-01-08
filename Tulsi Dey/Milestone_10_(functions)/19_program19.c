/*
Write a C program to find maximum and minimum between two numbers using functions.

*/
#include <stdio.h>

int getMax(int a, int b)
{
    return a > b ? a: b;
}
int getMin(int a, int b)
{
    return a < b ? a: b;
}
int main()
{
    int a, b;
    printf("Enter a first number: "); scanf("%d",&a);
    printf("Enter a second number: "); scanf("%d",&b);
    printf("\nMax: %d",getMax(a,b));
    printf("\nMin: %d",getMin(a,b));
    return 0;
}