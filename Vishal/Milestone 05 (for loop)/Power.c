#include<stdio.h>

int main ()
{
    int n,p,a=1;
    printf("Enter base and its exponent  \n");
    scanf("%d  %d",&n,&p);
    for(int i=1;i<=p;i++)
      a*=n;
    
    printf("The value of %d the of power %d\n%d",n,p,a);
    return 0;
 }