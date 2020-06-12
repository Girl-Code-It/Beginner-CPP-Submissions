#include<stdio.h>

int main ()
{
    int n,a,reverse=0;
    printf("input a no. \n");
    scanf("%d",&n);
    while(n!=0)
    { 
       reverse*= 10;
       reverse+= n%10;
       n/=10;
    }
    printf("Reverse no. Of input no. is %d\n",reverse);
    return 0;
}
    
    