#include<stdio.h>

int main()
{
    int t,a,b,c,k;
    scanf("%d",&t);

    while(t--)
    {
        scanf("%d %d %d %d",&a,&b,&c,&k);

        if(c >= k)
            printf("0\n");

        else
        {
            unsigned long long low = 0,high = k/a,mid,ans;
            while(low <= high)
            {
                mid = low + (high - low)/2;

                if(a*mid*mid + b*mid + c >= k)
                {
                    ans = mid;
                    high = mid - 1;
                }
                else
                    low = mid + 1;

            }
            printf("%llu\n",ans);
        }
    }
}