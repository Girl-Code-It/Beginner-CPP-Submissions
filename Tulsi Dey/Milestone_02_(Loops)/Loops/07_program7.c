/*
Write a C program to find sum of all even numbers between 1 to n.

*/
#include <stdio.h>

int main()
{
    int n, sum = 0;
    printf("Enter a number: "); scanf("%d", &n);
    printf("Sum of all even numbers between 1 to %d: ",n);

    for(int i = 0; i <= n; i++)
    {
        if(i%2 == 0)
        sum += i;
    }
    printf("%d",sum);
    return 0;
}