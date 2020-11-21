/*
Write a C program to find sum of all prime numbers between 1 to n.

*/
#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n)
{
    if(n == 1) return false;
    if(n == 2) return true;

    for(int i = 2; i*i <= n; i++)
    {
        if(n%i == 0)
        return false;
    }
    return true;
    
}
int main()
{
    int n;
    printf("Enter the number: "); scanf("%d",&n);
    int sum = 0;
    
    for(int i = 1; i <= n; i++)
    {
        if(isPrime(i)) sum += i;
    }
    printf("Sum of all prime numbers between 1 to %d is %d",n,sum);

    return 0;
}