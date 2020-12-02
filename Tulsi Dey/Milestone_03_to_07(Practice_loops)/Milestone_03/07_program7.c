/*
Write a C program to check whether a number is palindrome or not.

*/
#include <stdio.h>

int main()
{
    int n; 
    printf("Enter a number: "); scanf("%d",&n);
    int rev = 0, copy = n;

    while(n != 0)
    {
        rev = rev*10 + n%10;
        n /= 10;
    }
    if(copy == rev)
    printf("%d is palindrome",copy);
    else
    printf("%d is not palindrome",copy);
    return 0;
}