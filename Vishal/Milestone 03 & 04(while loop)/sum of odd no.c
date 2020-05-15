#include<stdio.h>

int main()
{
    int n,sum=0;
    printf("enter the value of n \n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
     if((i%2)!=0)
    sum+=i;
    }
    printf("sum of odd no.= %d",sum);
    return 0;
}