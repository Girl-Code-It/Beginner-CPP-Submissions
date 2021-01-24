/*
Write a C program to print all strong numbers between given interval using functions.

*/
#include <stdio.h>
#include <stdbool.h>

long fact(int a)
{
    if(a <= 1) return 1;
    return a*fact(a-1);
}
bool isStrong(int a)
{
    long sum = 0, copy = a;
    while(a != 0)
    {
        sum += fact(a%10);
        a /= 10;
    }
    if(copy == sum) return true;
    return false;
    
}
int main()
{
    int a, b;
    printf("Enter a lowerbound: "); scanf("%d",&a);
    printf("Enter a upperbound: "); scanf("%d",&b);

    for(int i = a; i <= b; i++)
    {
        if(isStrong(i)) printf("%d ",i);
    }
    return 0;
}