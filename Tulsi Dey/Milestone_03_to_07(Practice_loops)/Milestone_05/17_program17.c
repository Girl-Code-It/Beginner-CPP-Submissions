/*
Write a C program to print all Prime numbers between 1 to n.

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

    for(int i = 1; i <= n; i++)
    {
        if(isPrime(i)) printf("%d ",i);
    }

    return 0;
}