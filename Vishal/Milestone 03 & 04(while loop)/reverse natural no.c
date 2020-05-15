#include<stdio.h>

int main ()
{
    int n,a,i=1;
    printf("enter the value of n \n");
    scanf("%d",&n);
    while(i<=n)
    {
    a=(n+1)-i;
    printf("%d\n",a);
    i++;
    }
    return 0;
}
    