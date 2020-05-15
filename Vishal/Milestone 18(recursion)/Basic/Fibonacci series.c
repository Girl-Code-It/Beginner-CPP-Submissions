#include<stdio.h>

int Fib(int n)
{
    if(n == 1)
    return 0;  
    
    if(n == 2)
    return 1;  
  
    return Fib(n-1) + Fib(n-2);
}

int main()
{
    int n;
    printf("Enter the index : ");
    scanf("%d",&n);
    
    printf("Value of fibonacci series at index %d : %d\n",n,Fib(n));
    
    return 0;
}