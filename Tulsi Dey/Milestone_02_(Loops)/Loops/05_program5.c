/*
Write a C program to print all odd number between 1 to 100.

*/
#include <stdio.h>

int main()
{
    printf("Printing all odd numbers between 1 to 100: \n");

    for(int i = 1; i <= 100; i++)
    {
        if(i&1 != 0)
        printf("%d ",i);
    }
    return 0;
}