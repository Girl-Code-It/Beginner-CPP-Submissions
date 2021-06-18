/*
Write a C program to print Fibonacci series up to n terms.

*/
#include <stdio.h>

int getFibo(int n)
{
   if(n <= 1) return n;
   return getFibo(n-1)+getFibo(n-2);
}
int main()
{
    int n;
    printf("Enter the number: "); scanf("%d",&n);

    for(int i = 0; i <= n; i++)
{
   printf("%d ",getFibo(i));
}
    return 0;
}