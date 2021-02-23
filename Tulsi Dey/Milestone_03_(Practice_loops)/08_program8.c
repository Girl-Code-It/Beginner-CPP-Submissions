/*
Write a C program to find frequency of each digit in a given integer.

*/
#include <stdio.h>
#include <string.h>

int main()
{
    char n[20];
    printf("Enter a number: "); fgets(n,20,stdin);

    int arr[10] = {0};

    for(int i = 0; i <= 9; i++)
    {
        for(int j = 0; j < strlen(n); j++)
        {
          if(i == n[j]-'0')
          arr[i]++;
        }
    }
    
    for(int i = 0; i < 10; i++)
    {
        printf("\nFrequency of %d is %d",i,arr[i]);
    }

    return 0;
}