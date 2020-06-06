#include<stdio.h>

int main ()
{
    int n,a,sum=0;
    printf("input a integer \n");
    scanf("%d",&n);
    while(n!=0)
    { 
       a = n%10;
       sum+= a;
       n/=10;
    }
    printf("sum is %d",sum);
    
    return 0;
}
    
    