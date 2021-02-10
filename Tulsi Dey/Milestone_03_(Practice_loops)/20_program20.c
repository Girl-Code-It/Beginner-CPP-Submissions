/*
Write a C program to check whether a number is Armstrong number or not.

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

    if(isArmstrong(n))
    printf("%d is an armstrong number",n);
    else
    printf("%d is not an armstrong number",n);

    return 0;
}