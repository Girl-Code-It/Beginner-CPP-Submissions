#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define deb(x) cout << #x << " = " << x << endl;

const int MOD = 1e9 + 7;

int a, b, c, d, k;

#define foo(t) a *pow(t, 3) + b *pow(t, 2) + c *t + d

int bSearch(int lo, int hi, int k)
{
    int res = 0;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (foo(mid) <= k && foo(mid + 1) > k)
        {
            return mid;
        }
        if (foo(mid) <= k)
        {
            res = mid;
            lo = mid + 1;
        }
        else
        {
            hi = mid - 1;
        }
    }
    return res;
}
void solution()
{
    cin >> a >> b >> c >> d >> k;

    cout << bSearch(0, 1000000, k) << endl;
    //since ((10^6)^3) = 10^18
    //so upperbound for t is 10^6
}

int32_t main()
{
    int testCases = 1;
    cin >> testCases;
    while (testCases-- > 0)
    {
        solution();
    }
    return 0;
}