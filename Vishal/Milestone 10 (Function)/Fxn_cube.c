#include<stdio.h>

int cube(int x)
{
  return x*x*x ;
}

int main()
{
    int n;
    printf("Enter the no to find its cube : ");
    scanf("%d",&n);
    printf("Cube of %d is %d\n",n,cube(n));
}