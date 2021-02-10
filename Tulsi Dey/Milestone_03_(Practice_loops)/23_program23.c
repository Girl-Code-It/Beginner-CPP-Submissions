/*
Write a C program to print all Perfect numbers between 1 to n.

*/
#include <stdio.h>
#include <stdbool.h>

bool isPerfect(int n)
{int sum = 0;
    for(int i = 1; i < n; i++)
    {
        if(n%i == 0)
        sum += i;
    }

    if(sum == n) return true;
    return false;
}
int main()
{
    int n;
    printf("Enter the number: "); scanf("%d",&n);

    for(int i = 1; i <= n; i++)
{
    if(isPerfect(i))
    printf("\n%d is a perfect number",i);
}
    return 0;
}