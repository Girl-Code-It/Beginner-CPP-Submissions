/*
Write a C program to find HCF (GCD) of two numbers

*/
#include <stdio.h>

#define MIN(a,b) (((a)<(b))?(a):(b))
#define MAX(a,b) (((a)>(b))?(a):(b))

int getGCD(int a, int b)
{
    if(a == 0 || b == 0) return MAX(a,b);
    return getGCD(b,a%b);
}
int main()
{
    int a, b;
    printf("Enter the first number: "); scanf("%d",&a);
    printf("Enter the second number: "); scanf("%d",&b);
    
    int gcd = getGCD(a,b);

    printf("The gcd of %d and %d is %d",a,b,gcd);
    return 0;
}