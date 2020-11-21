/*
Write a C program to print all even numbers between 1 to 100. 
- using while loop

*/
#include <stdio.h>

int main()
{
    printf("Printing all even numbers between 1 to 100: \n");
    
    int i = 1;

    while(i <= 100)
    {
        if(i%2 == 0)
        printf("%d ",i);
        i++;
    }
    return 0;
}