/*
Write a C program to print all natural numbers from 1 to n. 
- using while loop

*/
#include <stdio.h>

int main()
{
    int n;
    printf("Enter a natural number:");
    scanf("%d",&n);
    int i = 1;

    while(i <= n)
    {
        printf("%d ",i);
        i++;
    }
    return 0;
}