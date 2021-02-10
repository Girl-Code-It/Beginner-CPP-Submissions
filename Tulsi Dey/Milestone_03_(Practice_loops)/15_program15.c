/*
Write a C program to find LCM of two numbers.

*/
#include <stdio.h>

#define MIN(a,b) (((a)<(b))?(a):(b))
#define MAX(a,b) (((a)>(b))?(a):(b))

int getGCD(int a, int b)
{
    if(a == 0 || b == 0) return MAX(a,b);
    return getGCD(b,a%b);
}
int getLCM(int a, int b)
{
    return (a*b)/getGCD(a,b);
}
int main()
{
    int a, b;
    printf("Enter the first number: "); scanf("%d",&a);
    printf("Enter the second number: "); scanf("%d",&b);
    
    int lcm = getLCM(a,b);

    printf("The lcm of %d and %d is %d",a,b,lcm);

    return 0;
}