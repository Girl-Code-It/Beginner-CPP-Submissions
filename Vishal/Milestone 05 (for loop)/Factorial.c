#include<stdio.h>

int main ()
{
    int n,a=1;
    printf("Enter the no. \n");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
        a*=i;

    printf("%d!=%d",n,a);
    return 0;
}