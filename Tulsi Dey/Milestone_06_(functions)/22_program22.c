/*
Write a C program to find all prime numbers between given interval using functions.


*/
#include <stdio.h>
#include <stdbool.h>

bool isPrime(int a)
{
    if(a == 1) return false;
    if(a == 2) return true;

    for(int i = 2; i*i <= a; i++)
    if(a%i == 0)
    return false;
    return true;
}
int main()
{
    int a, b;
    printf("Enter a lowerbound: "); scanf("%d",&a);
    printf("Enter a upperbound: "); scanf("%d",&b);

    for(int i = a; i <= b; i++)
    {
        if(isPrime(i)) printf("%d ",i);
    }
    return 0;
}