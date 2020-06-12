#include<stdio.h>

int converting(int a,int b,int c)
{
    if(a >= b)
        return (a-b)/2 + (a-b)%2;
    if(b%c == 0)
        return 1 + converting(a,b/c,c);
    else
    {
        int x = (b/c + 1)*c;
        return (x-b)/2 + (x-b)%2 + converting(a,x,c);
    }
}

int main()
{
    int a,b,c,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d",&a,&b,&c);
        printf("%d\n", converting(a,b,c));
    }
    return 0;
}