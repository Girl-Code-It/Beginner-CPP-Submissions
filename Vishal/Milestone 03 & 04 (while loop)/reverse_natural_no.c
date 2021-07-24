#include<stdio.h>

int main ()
{
    int n;
    printf("enter the value of n \n");
    scanf("%d",&n);
    while(n)
        printf("%d ", n--);
    return 0;
}
    