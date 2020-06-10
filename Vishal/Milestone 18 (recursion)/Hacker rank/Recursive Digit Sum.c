#include<stdio.h>

int superdigit(long long n)
{
    if(n < 10)
        return n;
    else
        return superdigit(sum(n));
}

int sum(long long n)
{
    int count = 0;
    while(n)
    {
        count += n%10;
        n /= 10;
    }
    return count;
}

int main ()
{
    int k,i = 0;
    long long sum = 0;
    char c;
    do
    {
        c=getchar();
        if(c != ' ' && c != '\n')
            sum += (int)(c -'0');

    } while(c != ' ' && c!= '\n');
    scanf("%d",&k);
    printf("%d\n",superdigit(sum*k));
}