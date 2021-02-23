/*
Write a C program to print all Armstrong numbers between given interval using functions.

*/
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isArmstrong(int a)
{
    int sum = 0, copy = a;
    while(a != 0)
    {
        sum += pow(a%10,3);
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
        if(isArmstrong(i)) printf("%d ",i);
    }
    return 0;
}