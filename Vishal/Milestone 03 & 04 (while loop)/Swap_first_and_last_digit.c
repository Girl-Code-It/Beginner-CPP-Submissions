#include<stdio.h>

int main ()
{
    int n,a,sum;
    printf("input a integer \n");
    scanf("%d",&n);
    a=n%10;
    while(n>=10)
    {
       n/=10;
    }
    printf("Before swapping\n");
    printf("First digit is %d\n",n);
    printf("Last digit is %d\n",a);
    printf("After swapping\n");
    printf("First digit is %d\n",a);
    printf("Last digit is %d\n",n);
    return 0;
}
    
    