/*
Write a C program to check whether a number is Strong number or not.

*/
#include <stdio.h>
#include <stdbool.h>

int getFact(int n)
{
    if(n <= 1) return 1;
    return n*getFact(n-1);
}
bool isPerfect(int n)
{
    int sum = 0, copy = n;
    while(n != 0)
    {
        sum += getFact(n%10);
        n /= 10;
    }

    if(sum == copy) return true;
    return false;

}
int main()
{
    int n;
    printf("Enter the number: "); scanf("%d",&n);

    if(isPerfect(n))
    printf("\n%d is a strong number",n);
    else
    printf("\n%d is not a strong number",n);

    return 0;
}