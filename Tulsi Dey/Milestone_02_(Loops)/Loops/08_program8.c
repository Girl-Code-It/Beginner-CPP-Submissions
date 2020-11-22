/*
Write a C program to find sum of all odd numbers between 1 to n.

*/
#include <stdio.h>

int main()
{
    int n, sum = 0;
    printf("Enter a number n: ");
    scanf("%d", &n);
    printf("Sum of all odd numbers between 1 to %d is:", n);

    for(int i = 1; i <= n; i++)
    {
        if(i%2 != 0)
        sum += i;
    }

    printf("%d",sum);

    return 0;
}