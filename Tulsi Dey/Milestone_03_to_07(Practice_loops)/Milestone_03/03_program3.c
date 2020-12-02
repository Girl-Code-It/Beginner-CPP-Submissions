/*
Write a C program to swap first and last digits of a number.

*/
#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("Enter a number: "); scanf("%d",&n);
    int last = n%10, first, copy = n, count = 0;
    
    while(n != 0)
    {
        count++;
        first = n%10;
        n /= 10;
    }
    int res = (copy/10)*10 + first;
    res = last*(int)pow(10,count-1) + res%(int)pow(10,count-1);
    printf("After swapping the first and last digits of %d the result is %d",copy,res);
    return 0;
}