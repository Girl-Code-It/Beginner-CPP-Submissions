#include <stdio.h>

int fibonacci_term(x)
{
    if(x==0)
    return 0;
    else if(x==1)
    return 1;
    else
    return fibonacci_term(x-1)+fibonacci_term(x-2);
}

void main()
{
    int n;
    printf("Enter any no : ");
    scanf("%d",&n);

    printf("The value of fibonacci series at %dth place is %d",n,fibonacci_term(n));
 
}



