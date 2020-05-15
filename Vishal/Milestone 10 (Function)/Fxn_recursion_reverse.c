#include<stdio.h>

int reverse(int num)
{
    int digit = (int) log10(num);
    if(num == 0) return 0;
    return ((num%10 * pow(10, digit)) + reverse(num/10));
}

int main()
{
    int n;
    printf("Enter any no : ");
    scanf("%d",&n);

    printf("Reverse of %d is %d",n,reverse(n));
    return 0;
}