/*
Write a C program to print all Strong numbers between 1 to n.

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

    for(int i = 1; i <= n; i++)
{
    if(isPerfect(i))
    printf("\n%d ",i);
    
}
    return 0;
}