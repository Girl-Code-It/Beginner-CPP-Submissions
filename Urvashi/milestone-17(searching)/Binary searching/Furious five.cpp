#include <stdio.h>
typedef long long ll;

ll furious(ll n)
{
    ll rem = 0;
    while (n)
    {
        rem += n / 5;
        n /= 5;
    }
    return rem;
}

int main()
{
    ll n, f;
    scanf("%lld", &n);

    while (n--)
    {
        scanf("%lld", &f);
        ll low = 5, high = 1e10, mid, ans = high;
        while (low <= high)
        {
            mid = low + (high - low) / 2;
            ll var = furious(mid);
            if (var >= f)
            {
                high = mid - 1;
                ans = mid;
            }
            else
                low = mid + 1;
        }
        printf("%d\n", ans);
    }
}
