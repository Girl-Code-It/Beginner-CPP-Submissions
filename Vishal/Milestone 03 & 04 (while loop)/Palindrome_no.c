#include<stdio.h>

int main ()
{
    int n,a,reverse=0;
    printf("input a no. \n");
    scanf("%d",&n);
    a=n;
    while(a!=0)
    { 
       reverse*= 10;
       reverse+= a%10;
       a/=10;
    }
    printf("Reverse no. Of input no. is %d\n",reverse);
    if (n==reverse)
    printf("%d is a Palindrome no \n",n);
    else
    printf("%d is not a Palindrome no \n",n);
    return 0;
}
    
    
    