#include <stdio.h>
int main()
{
    int i,n,k[100001]= {0},m,q;
    long long num;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%lld",&num);
        if(num<=100000)
            k[num]++;
    }
    for(i=1; i<=100000; i++)
        k[i]=k[i]+k[i-1];

    scanf("%d",&q);
    while(q--)
    {
        scanf("%d",&m);
        printf("%d\n",k[m-1]);
    }
    return 0;
}