#include<stdio.h>

int palindrome(n)
{
    if(n==reverse(n))
    printf("%d is a palindrome no",n);
    else
    printf("%d is not a palindrome no",n);
}

int reverse(int num)
{
    int digit = (int) log10(num);
    if(num == 0) return 0;
    return ((num%10 * pow(10, digit)) + reverse(num/10));
}

void main()
{
    int n;
    printf("Enter any no : ");
    scanf("%d",&n);
    palindrome(n);
    
}

