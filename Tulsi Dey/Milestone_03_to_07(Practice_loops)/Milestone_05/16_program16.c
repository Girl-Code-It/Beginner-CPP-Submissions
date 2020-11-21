/*
Write a C program to check whether a number is Prime number or not.

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
    

    if(isPrime(n)) printf("%d is a prime number",n);
    else printf("%d is not a prime number",n);

    return 0;
}