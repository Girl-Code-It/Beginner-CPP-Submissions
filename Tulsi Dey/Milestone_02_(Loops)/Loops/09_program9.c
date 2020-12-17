/*
Write a C program to print multiplication table of any number.

*/
#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    for(int i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n",i,n,i*n);
    }
    return 0;
}