#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define deb(x) cou t << #x << " = " << x << endl;
ll f(ll i, ll a, ll b, ll c)
{
    ll res = a * i * i + b * i + c;
    return res;
}

ll bSearch(ll a, ll b, ll c, ll k)
{
    ll l = 0, r = 100000;
    ll mid = l + (r - l) / 2;
    ll ans = k;

    while (l < r)
    {
        mid = l + (r - l) / 2;

        if (f(mid, a, b, c) < k)
        {
            l = mid + 1;
        }
        if (f(mid, a, b, c) >= k)
        {
            ans = min(ans, mid);
            r = mid;
        }
    }
    return ans;
}
void getRes()
{
    ll a, b, c, k;
    cin >> a >> b >> c >> k;

    ll res = 0;

    res = bSearch(a, b, c, k);

    cout << res << endl;
}

int main()
{

    ll testCases = 1;
    cin >> testCases;

    while (testCases-- > 0)
    {
        getRes();
    }
    return 0;
}