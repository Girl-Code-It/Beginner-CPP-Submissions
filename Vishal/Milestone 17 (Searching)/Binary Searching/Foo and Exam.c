#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    long long a,b,c,d,k;
    while(t--)
    {
        scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&k);
        int n = (int)ceil(cbrt(k/a));
        long long val=a*n*n*n+b*n*n+c*n+d;

        while(val>k&&d<k)
        {
            n--;
            val=a*n*n*n+b*n*n+c*n+d;
        }
        printf("%d\n",n );
    }
    return 0;
}