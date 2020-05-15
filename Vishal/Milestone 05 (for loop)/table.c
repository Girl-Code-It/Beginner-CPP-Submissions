#include<stdio.h>

int main()
{
    int n,a;
    printf("which table do u want to print?");
    scanf("%d",&n);
    for(int i=1;i<11;i++)
    {
    a=n*i;
    printf("%d*%d = %d\n",n,i,a);
    }
    return 0;
}