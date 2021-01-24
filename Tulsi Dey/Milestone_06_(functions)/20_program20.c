/*
Write a C program to check whether a number is even or odd using functions.

*/
#include <stdio.h>
#include <stdbool.h>

bool isOdd(int a)
{
    return a%2 != 0;
}
int main()
{
    int a;
    printf("Enter a number: "); scanf("%d",&a);

    if(isOdd(a)) printf("%d is odd",a);
    else printf("%d is even",a);
    return 0;
}