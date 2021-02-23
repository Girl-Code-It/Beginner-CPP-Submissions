/*
Write a C program to print all perfect numbers between given interval using functions.

*/
#include <stdio.h>
#include <stdbool.h>

bool perfect(int a)
{
    int sum = 0;

    for(int i = 1; i < a; i++)
    if(a%i == 0)
    sum += i;

    if(sum == a) return true;
    return false;
}
int main()
{
    int a, b;
    printf("Enter a lowerbound: "); scanf("%d",&a);
    printf("Enter a upperbound: "); scanf("%d",&b);

    for(int i = a; i <= b; i++)
    {
        if(perfect(i)) printf("%d ",i);
    }
    return 0;
}