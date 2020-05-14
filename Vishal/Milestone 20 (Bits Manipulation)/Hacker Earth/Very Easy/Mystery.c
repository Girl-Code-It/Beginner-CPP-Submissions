#include<stdio.h>
#include<stdlib.h>
int main()
{
    unsigned long long n;
    int Count = 0;
    
    while(scanf("%llu",&n) != EOF)
    {
        Count = 0;
        while(n)
        {
            if(n & 1)
            Count++;
            
            n = n >> 1;
        }
        printf("%d\n",Count);
    }
    return 0;
}