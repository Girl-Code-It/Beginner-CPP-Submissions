//factorial using recursion
#include<stdio.h>

int fac(int x)
{
  if(x<2)
  return 1;

  else 
  return x*fac(x-1);
}

int main()
{
    int n,factorial;
    printf("enter the no to find its factorial : ");
    scanf("%d",&n);
    factorial = fac(n);
    printf("%d! = %d",n,factorial);
    return 0;
}



       
    
    