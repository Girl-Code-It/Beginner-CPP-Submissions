/*
Write a C program to print all Armstrong numbers between 1 to n.

*/
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool isArmstrong(int n)
{
    int num = 0, copy = n;
    while(n != 0)
    {
        num += pow(n%10,3);
        n /= 10;
    }
    if(num == copy) return true;
    return false;

}
int main()
{
    int n;
    printf("Enter the number: "); scanf("%d",&n);
    for(int i = 1; i <= n; i++)
{
    if(isArmstrong(i))
    printf("\n%d ",i);
    
}
    return 0;
}