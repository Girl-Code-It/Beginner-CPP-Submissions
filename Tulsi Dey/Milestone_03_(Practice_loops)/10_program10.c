/*
Write a C program to print all ASCII character with their values.

*/
#include <stdio.h>

int main()
{
    for(int i = 33; i < 127; i++)
    {
        printf("\nASCII value of %c -> %d ",(char)i,i);
    }
    return 0;
}