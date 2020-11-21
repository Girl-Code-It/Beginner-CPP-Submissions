/*
Write a C program to find sum of all natural numbers between 1 to n.

*/
#include <stdio.h>

int main()
{
    int n, sum = 0;
    printf("Enter a number: "); scanf("%d", &n);
    printf("Sum of all natural numbers between 1 to %d: ",n);

    for(int i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("%d",sum);
    return 0;
}