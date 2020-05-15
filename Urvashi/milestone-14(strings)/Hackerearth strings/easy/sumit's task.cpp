#include<stdio.h>
#include<string.h>
#define ll long long
int main()
{
    ll t;
    char str[1000000];
    scanf("%lld",&t);
    while(t--)
    {   ll sum=0,sum1=0;
        scanf("%s",str);
        ll b=strlen(str);
        ll k=0,k1=0;
        for(ll j=0; j<=b-1; j++)
        {
            if(str[j]=='Z')
            {
                sum=sum+j-k;
                k++;
            }
            if(str[b-1-j]=='Z')
            {
                sum1=sum1+j-k1;
                k1++;
            }
        }
        if(sum<=sum1)
            printf("%lld\n",sum);
        else
            printf("%lld\n",sum1);
    }
    return 0;
}
