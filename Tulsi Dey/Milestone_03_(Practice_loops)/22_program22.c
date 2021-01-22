/*
Write a C program to check whether a number is Perfect number or not.

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

    if(isPerfect(n))
    printf("\n%d is a perfect number",n);
    else
    printf("\n%d is not a perfect number",n);

    return 0;
}